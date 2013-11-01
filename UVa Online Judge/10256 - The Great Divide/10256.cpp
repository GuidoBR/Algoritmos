#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

typedef struct {double x, y;} Ponto;

double cruzar(Ponto o, Ponto a, Ponto b);
int dentroPoligono(Ponto vPontos[], Ponto q, int tamanho);
bool comparador(Ponto p1, Ponto p2);
int monotone(Ponto vPontos[], int tamanho, Ponto ch[]);
int Intercepta(Ponto a1, Ponto a2, Ponto b1, Ponto b2);
int saida();

//Variaveis e arrays globais
int M, C, i, j, k, l;
Ponto Mp[505], Cp[505], Mch[1005], Cch[1005];

int main() {
	int M, C;
	while(cin >> M >> C) {
		if (M == 0 && C == 0)
			break;
		for (i = 0; i < M; i++)
			cin >> Mp[i].x >> Mp[i].y;
		for (i = 0; i < C; i++)
			cin >> Cp[i].x >> Cp[i].y;
		if (saida() == 0)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}

int saida() {
	int grupoM = monotone(Mp, M, Mch);
	int grupoC = monotone(Mp, M, Mch);
	
	for (i = 0; i < grupoC; i++) 
		if(dentroPoligono(Cch, Mch[i], grupoC)) 
			return 0;
	
	for (i = 0; i < grupoM; i++)
		if(dentroPoligono(Mch, Mch[i], grupoM)) 
			return 0;
	
	for (i = 0, j = grupoM - 1; i < grupoM; j = i++) 
		for (k = 0, l = grupoC - 1; k < grupoC; l = k++) 
			if(Intercepta(Mch[i], Mch[j], Cch[k], Cch[l]))
				return 0;
		
	return 1;
}

double cruzar(Ponto o, Ponto a, Ponto b) {
	return (a.x-o.x)*(b.y-o.y)-(a.y-o.y)*(b.x-o.x); 
}

int dentroPoligono(Ponto vPontos[], Ponto q, int tamanho) {
	if (tamanho == 1)
		return 0;
	if (tamanho == 2) {
		if ((vPontos[0].x > q.x) != (vPontos[1].x > q.x) && (vPontos[0].y > q.y) != (vPontos[1].y > q.y && fabs(cruzar(vPontos[0], vPontos[1], q))) < 1e-8)
			return 1;
		return 0;
	}
	int i, j, k = 0;
	for(i = 0, j = tamanho-1; i < tamanho; j = i++) 
        if(vPontos[i].y > q.y != vPontos[j].y > q.y && q.x < (vPontos[j].x-vPontos[i].x)*(q.y-vPontos[i].y)/(vPontos[j].y-vPontos[i].y)+vPontos[i].x)
           k++;
    return k&1;
}

bool comparador(Ponto p1, Ponto p2) {
    if(p1.x != p2.x)
        return p1.x < p2.x;
    return p1.y < p2.y;
}

int monotone(Ponto vPontos[], int tamanho, Ponto ch[]) {
	sort(vPontos, vPontos+tamanho, comparador);
	int i, m = 0, t;
	for (int i = 0; i < tamanho; i++) {
		while(m >= 2 && cruzar(ch[m-2], ch[m-1], vPontos[i]) < 0)
			m--;
		ch[m++] = vPontos[i];
		}
	return m-1;
}

int Intercepta(Ponto a1, Ponto a2, Ponto b1, Ponto b2) {
	if (cruzar(a1, a2, b1) * cruzar(a1, a2, b2) < 0 && cruzar(a2, a1, b1) * cruzar(a2, a1, b2) < 0 && cruzar(b1, b2, a1) * cruzar(b1, b2, a2) < 0 && cruzar(b2, b1, a1) * cruzar(b2, b1, a2) < 0)
		return 1;
	return 0;
}