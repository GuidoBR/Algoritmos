#include <iostream>
#define ULL unsigned long long
/*
*  100 - 3n +1 
* Guido Luz Percú - 03/01/2013
*/
ULL Executar3n1(ULL n);

int main() {
	ULL n;
	cin >> n;
	Executar3n1(n);
	return 0;
}

ULL Executar3n1(ULL n) {
	ULL iteracoes = 0;
	while (1) {
		iteracoes++;
		cout << n;
		if (n == 1)
			//break;
			return iteracoes;
		else 
			if (n&1) 
				n = 3*n + 1;
			else 
				n /= 2;
	}	
}