//Algoritmos de Busca em String: Knuth-Morris-Pratt, Boyer-Moore, Rabin-Karp
//Por Paulo Eustáquio e Guido Luz Percú
//19-01-2013
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char P[1000001], T[1000001];
int n, m, F[1000001], R[256];
int Tabela[10001];

void preKMP(string W, int tamanho) {
	int i = 0, j = -1;
	Tabela[0]= 0;	Tabela[1]= 0;
    for (i = 2; i < tamanho; i++) {
		j = Tabela[i-1];
		while(1) {
			if (W[j] == W[1-1]) {
				Tabela[i] = j+1;
				break;
			}
			if (j == 0) {
				Tabela[i] = 0;
				break;
			}
			j = Tabela[j];
		}
	}
}

int KMP(string S, string W) {
	/*
	 Knuth–Morris–Pratt - Algoritmo de procura em string
	 Busca de 0..Tamanho de S
	 Retorna a posição da primeira ocorrência da string W dentro da string S. 
	 Retorna -1 caso não ache.
	 Referência: http://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm#Description_of_and_pseudocode_for_the_search_algorithm
	*/
	int m = 0, i = 0, tamW = W.size(), tamS = S.size();
	//Tabela é precalculado em preKMP()
	preKMP(W, tamW);
	while (m + i <= tamS) {
		if (W[i] == S[m + i]) {
			if (i == tamW-1)
				return m;
			i++;
			}
		else {
			m += i - Tabela[i];
			if (Tabela[i] > -1)
				i = Tabela[i];
			else
				i = 0;
		}
	}
	return -1; //Não achou
}

int BM() { 
	/*
	Boyer-Moore - Algoritmo de procura em string
	Retorna a posição da primeira Busca por ocorrências da palavra P dentro do texto T
	*/ 
	int i,j,k;
   for(i = 0; i < 256; i++)  R[i] = m;      
   for(i = 0; i < m-1; i++)  R[P[i]] = m-i-1;          
   k = m-1;           
   while(k < n) {
      i = k; j = m-1;                
      while(T[i] == P[j] && j >= 0) {  i--;  j--;
      }            
      if(j < 0) cout << "Encontrou padrao na pos. " << i+m <<endl;             
      k+= R[T[k]];
   }
}
int RK() {
	/*
	Rabin-Karp - Algoritmo de procura em string
	Retorna a posição da primeira Busca por ocorrências da palavra P dentro do texto T
	*/ 
	int i, k, dM, h1, h2, d=256, q=3355439;     
    /*Preprocessamento*/
	dM = 1;  for (i=0; i<m-1; i++) dM = (d*dM)%q;
    h1 = 0;  for (i=0; i<m; i++)   h1 = (h1*d+P[i])% q;
    h2 = 0;  for (i=0; i<m; i++)   h2 = (h2*d+T[i])% q;
    /*Pesquisa*/
    i = m-1;
    while (i < n) {
        /*Compara*/
        if (h1 == h2){
            k = 1;
            while ((T[i-k+1] = P[m-k]) && (k < m)) k++;
            if (k == m) cout <<"Encontrou padrao na pos. " << i <<endl;
        }
        i++;
        if (i < n) {
            h2 = (h2+d*q-T[i-m]*dM)% q;
            h2 = (h2*d+T[i])% q;
        }
    }
}

int main()
{   cout <<"Texto: ";    cin >> T;
    cout <<"Padao: ";    cin >> P;
    n = strlen(T);
    m = strlen(P);    
    cout <<"KMP - Encontrou padrão na posição " << KMP() <<<endl; 
    cout <<"BM - Encontrou padrão na posição " << BM() << endl;  
    cout <<"RK - Encontrou padrão na posição " << RK() <<endl;       
    cin >> T;
}
