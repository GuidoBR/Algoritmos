/*
* Guido Luz Percú - 10-07-2012	
* Input:
2
100 0
0 100
OBS: Um WA por não ter fixed setprecision(2) :/
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int i, T, aumentoF, C;
	double aumenta_converte;
	cin >> T;
	for (i = 1; i <= T; i++)
	{
		cin >> C; // temp inicial em C;
		cin >> aumentoF; //aumento da temperatura em F;
		aumenta_converte = (((((1.8 * C) + 32) + aumentoF) - 32) / 1.8);
		cout << "Case " << i << ": " << fixed << setprecision (2) << aumenta_converte << endl;
		
	}	
	return 0;
}
