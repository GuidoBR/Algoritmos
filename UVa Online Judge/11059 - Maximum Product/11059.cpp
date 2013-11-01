#include <iostream>
#define LL long long
using namespace std;

int numeroElementosSeq, seqNumeros[18+1];
LL maximo, produto, maxProd();

int main() {
	int testcase = 0;
	while (cin >> numeroElementosSeq) {
		for (int c = 0; c < numeroElementosSeq; ++c) 
			cin >> seqNumeros[c];
		cout << "Case #" << ++testcase << ": The maximum product is " << maxProd() << "." << endl << endl;
	}
	return 0;
}

LL maxProd() {
	/* Retorna o Produto máximo de uma sequência
		Precisa de:
			- um vetor com a sequencia (seqNumeros)
			- o tamanho desse vetor (numeroElementosSeq)
		Nesse código usei var globais, mas podia ter passado por parametro.	
	*/
	maximo = 0;
	for (int i = 0; i < numeroElementosSeq; i++) {
	produto = 1;
		for (int j = i; j < numeroElementosSeq && produto; j++) {
			produto = produto * seqNumeros[j];
			if (produto > maximo)
				maximo = produto;
		}
	}
	return maximo;
}

/*
WA - ref: http://codingrush.wordpress.com/2012/07/12/44/
INPUT:
3
2 4 -3

5
2 5 -1 2 -1

2
-1 1

3
0 0 0

3 
-1 -1 -1

18
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

3
2 0 2

5
-1 -1 -1 -1 -1
*/