/*
* 11479 - Is this the easiest problem?
*/
#include <iostream>
#include <string>
using namespace std;

bool ehTriangulo(long int a, long int b, long int c);
long int valorAbsoluto(long int n);
int main ()
{	
	int T, c;
	long int l1, l2, l3;

	string msg;
	c = 0;

	cin >> T;
	while (cin >> l1 >> l2 >> l3, T--) {
		if (ehTriangulo(l1, l2, l3)) {
			if ((l1 == l2) && (l2 == l3))
				msg = "Equilateral";
			else if (((l1 == l2) && (l2 != l3)) || ((l1 == l3) && (l1 != l2)) || ((l2 == l3) && (l1 != l2)))
				msg = "Isosceles";
			else if ((l1 != l2) && (l2 != l3))
				msg = "Scalene";
		}
		else
				msg = "Invalid";
		c++;
		cout << "Case " << c << ": " << msg << endl;
	}
	return 0;
}

long int valorAbsoluto(long int n) {
	// Recebe um número n (long int), e retorna o módulo desse número.
	if (n < 0)
		return n * -1;
	return n;
}

bool ehTriangulo(long int a, long int b, long int c) {
	//Recebe três numeros long int (a, b, c) e checa se formam um triângulo.
	if (a > 0 && b > 0 && c > 0 && (valorAbsoluto(b - c) < a) && (a < (b + c)))
		return true;
	else
		return false;
}
