/*
* Guido Luz Percú - 05-07-2012	
* Input:
3
195
265
750
*/
#include <iostream>
using namespace std;


void SomaAtePalindromo(long n);

int main ()
{	
	int T;
	long n;
	cin >> T;
	for (int c = 0; c < T; c++) 
	{
		cin >> n;
		SomaAtePalindromo(n);	
	}
	return 0;
}
long inverte(long n) 
{
	long invN = 0;
    while (n != 0) 
	{
    	invN *= 10;
    	invN += n % 10;
        n /= 10;
    }
	return invN;
}

void SomaAtePalindromo(long n) 
{
	long i = 0;
    do
	{
    	n += inverte(n);
        i++;
    } while (inverte(n) != n);
	cout << i << " " << n << endl;
}
