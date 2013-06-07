/*
* Guido Luz Percú - 03-07-2012	
* Input:
10 12
10 14
100 200
*/
#include <iostream>
using namespace std;

int main ()
{	
	long exercito1, exercito2; // tem que ser long. Int é pequeno pra isso.
	while (cin >> exercito1 >> exercito2)
	{
		if (exercito1 > exercito2) 
			cout << exercito1 - exercito2 << endl;
		else
			cout << exercito2 - exercito1 << endl;
	}
	return 0;
}

