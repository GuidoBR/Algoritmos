/*
* Guido Luz Percú - 19-07-2012	
* Input:
3
10 20
20 10
10 10
*/
#include <iostream>
using namespace std;

int main ()
{	
	int t;
	long long int n1, n2;
	char op;
	
	cin >> t;
	while (t--)
	{
		cin >> n1 >> n2;
		if (n1 > n2)
			op = '>';
		else if (n1 < n2)
			op = '<';
		else
			op = '=';
		cout << op << endl;
	}
	return 0;
}
