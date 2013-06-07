/*
* Guido Luz Percú - 11-07-2012	
* Input:
2
637
-120
*/
#include <iostream>
using namespace std;

int main ()
{	
	int t, n;
	int conta;
	cin >> t;
	while (t--) //enquanto o numero de testes não for 0
	{
		cin >> n;
		conta = ((((((((n * 567) / 9) + 7492) * 235) / 47) - 498) % 100) / 10); //faz a conta e pega o 2a digito
		if (conta < 0)
			conta *= -1; //módulo, para transformar numeros negativos
		cout << conta << endl;
	}
	return 0;
}
