#include <iostream>
#include <cstring>
#define TAMANHO_T 10042
#define TAMANHO_M 100042
//se diminuir o tamanho o tempo aumenta, estranho.

using namespace std;

char cifras[256], notas[64], T[TAMANHO_T], M[TAMANHO_M];
int TabelaKMP[TAMANHO_T], tamanhoT, tamanhoM;
void preKMP(char *T){
	TabelaKMP[0] = TabelaKMP[1] = 0;
	int i, j;
	for(i = 2; i < tamanhoT; ++i){
		j = TabelaKMP[i - 1];
		while(1){
			if(T[j] == T[i - 1]){ TabelaKMP[i] = j + 1; break; }
			if(j == 0){ TabelaKMP[i] = 0; break; }
			j = TabelaKMP[j];
		}
	}
}
int KMP(char *M, char *T){
	preKMP(T);
	for(int i = 0, j = 0; j < tamanhoM; ){
		if(M[j] == T[i]){
			i++;
			j++;
			if(i == tamanhoT) 
				return j;
		} 
		else if(i > 0) 
			i = TabelaKMP[i];
		else 
			j++;
	}
	return -1;
}
void lerMelodia(char *melodia, int tamanho) {
	char a, b;
	for(int i = 0; i < tamanho; ++i) {
		cin >> notas;
		a = b;
		b = cifras[notas[0]] + (notas[1] == '#') - (notas[1] == 'b');
		b = (b + 12) % 12;
		if(i) 
			melodia[i - 1] = (b - a + 12) % 12;
	}
}

int main(){
	cifras['A'] = 0; cifras['B'] = 2;    cifras['C'] = 3;
	cifras['D'] = 5; cifras['E'] = 7; cifras['F'] = 8; cifras['G'] = 10;
	
	while(cin >> tamanhoM >> tamanhoT) {
		if (!tamanhoT && !tamanhoM)
			break;
		lerMelodia(M, tamanhoM);
		lerMelodia(T, tamanhoT);
		--tamanhoM, --tamanhoT;

		if (KMP(M, T) > 0)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}
	return 0;
}