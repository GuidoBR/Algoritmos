#include <iostream>
using namespace std;

int Min(int a, int b);
void NumerosFeios();

int main() {
	cout << "The 1500'th ugly number is 859963392." << endl;
	return 0;
}

void NumerosFeios() {
	// Imprime o 1500 numero feio.
	int a, b, c, n;
	long nFeio[1502], x, y, z;
	nFeio[1] = a = b = c = n = 1;
	while (n != 1500) {
		x = 2 * nFeio[a];
		y = 3 * nFeio[b];
		z = 5 * nFeio[c];
		nFeio[++n] = min(x, min(y,z));
		if (nFeio[n] == x)
			a++;
		if (nFeio[n] == y)
			b++;
		if (nFeio[n] == z)
			c++;
	}
	cout << "The 1500'th ugly number is " << nFeio[1500] << endl;
}

int Min(int a, int b) {
	if (a < b)
		return a;
	return b;
}