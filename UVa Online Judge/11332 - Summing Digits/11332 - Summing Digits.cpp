/*
* Guido Luz Percú - 19-07-2012	
*/
#include <iostream>
using namespace std;
int main ()
{	
	unsigned long int n;
	//unsigned int porque o numero é sempre um inteiro positivo
	// 1 < n < 2.000.000.000
	while (cin >> n)
	{
		if (n == 0)
			break;
		//se um numero for divisivel por 9, então a soma dos digitos é
		//um numero divisivel por 9
		else if (n % 9 == 0)
			cout << 9 << endl;
		//se não for divisivel por 9, então a soma dos digitos é
		//o resto da divisão
		else if (n % 9 != 0)
			cout << n % 9 << endl;
	}
	return 0;
}
