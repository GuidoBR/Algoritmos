#include <iostream>
#include<math.h>  
#define MINIMO 1e-15
using namespace std;
typedef struct { long double x, y; } ponto;

long double valorAbsoluto(long double a);

int main() {
	long double mx, my, dx, dy;
	ponto Arv1, Arv2;
	while (cin >> Arv1.x >> Arv1.y >> Arv2.x >> Arv2.y) {
		if ((valorAbsoluto(Arv1.x-Arv2.x) < MINIMO) && (valorAbsoluto(Arv1.y-Arv2.y) < MINIMO))
			cout << "Impossible." << endl;
		else
		{
			mx = (Arv1.x + Arv2.x) /2;
			my = (Arv1.y + Arv2.y) /2;
			dx = mx - Arv1.x;
			dy = my - Arv1.y;
	
			cout.setf(ios_base::fixed);
			cout.precision (10);
			cout << mx-dy << " " << my + dx << " " << mx + dy << " " << my-dx << endl;
		}
	}

return 0;
}
long double valorAbsoluto(long double a) {
	if (a < 0)
		return a * -1;
	return a;
}