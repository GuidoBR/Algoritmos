/*
* Guido Luz Percú - 03-07-2012	
* Input:
3 9
0 99
12 27
-1 -1
*/
#include <iostream>
using namespace std;

int ContaCanal(int n1, int n2);
int main ()
{
    int n_atual, n_destino;
    while (cin >> n_atual >> n_destino) {
          if ((n_atual == -1) && (n_destino == -1)) 
			break;
          else 
			cout << ContaCanal(n_atual, n_destino) << endl;
          }
    return 0;   
}
int ContaCanal(int n1, int n2) {
    int conta1 = 0, conta2 = 0, aux = n1;
    while (n2 != n1) { //subindo
          if (n1 == 99)
             n1 = 0;
          else
              n1++;
          conta1++;
          }
    while (n2 != aux) { //descendo
          if (aux == 0)
             aux = 99;
          else
              aux--;
          conta2++;
          }
    if (conta1 <= conta2) 
       return conta1;            
    else 
       return conta2;
    }

