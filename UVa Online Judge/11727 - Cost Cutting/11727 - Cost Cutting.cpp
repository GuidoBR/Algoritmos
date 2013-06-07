/*
* Guido Luz Percú - 20-08-2012	
* Input:
11727.in
*/
#include <iostream>
using namespace std;

int meio(int a, int b, int c);
int main ()
{	
	int T, c = 0, f1, f2, f3;
	
	cin >> T;
	while(T--) 
	{		
		cin >> f1 >> f2 >> f3;
		c++;
		cout << "Case " << c << ": " << meio(f1,f2,f3) << endl;
	}
	return 0;
}

int meio(int a, int b, int c)
{
	if ((a > b) && (a < c) || (a > c) && (a < b))
		return a;
	if ((b > a) && (b < c) || (b > c) && (b < a))
		return b;
	if ((c > a) && (c < b) || (c > b) && (c < a))
		return c;
}
