/*
* 12572 - 10:6:2
* Desvolvimento e Implementação de Algoritmos
*/
#include <iostream>
#include <iomanip> 
#include <cmath>
#define PI acos(-1)
using namespace std;

int main ()
{	
	int t;
	double l, r, w, areaVerde, areaVermelha;
	cin >> t;
	while (t--) {
		cin >> l;

		r = l/5;
		w = l*6/10;
		
		areaVermelha = PI*r*r;
		areaVerde = l*w - areaVermelha;

		cout << fixed << setprecision(2); 
		cout << areaVermelha << " " << areaVerde << endl;
	}
	return 0;
}
