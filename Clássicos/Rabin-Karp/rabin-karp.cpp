//Algoritmos de Busca em String: Rabin-Karp
//Por Paulo Eustáquio e Guido Luz Percú
//19-01-2013
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char P[1000001], T[1000001];
int n, m, F[1000001], R[256];
int Tabela[10001];

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
{
    cout <<"Texto: ";    cin >> T;
    cout <<"Padao: ";    cin >> P;
    n = strlen(T);
    m = strlen(P);
    cout <<"RK - Encontrou padrão na posição " << RK() <<endl;
}
