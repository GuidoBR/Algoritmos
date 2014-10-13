// Algoritmos de Busca em String: Boyer-Moore
// Por Paulo Eustáquio e Guido Luz Percú
// 19-01-2013
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char P[1000001], T[1000001];
int n, m, F[1000001], R[256];
int Tabela[10001];

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

int main() {
    cout <<"Texto: ";    cin >> T;
    cout <<"Padao: ";    cin >> P;
    n = strlen(T);
    m = strlen(P);
    cout <<"BM - Encontrou padrão na posição " << BM() << endl;
}
