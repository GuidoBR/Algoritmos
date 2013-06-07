/*
* Guido Luz Percú - 11-07-2012	
* Baseado em: http://tausiq.wordpress.com/2009/06/02/acm-uva-10070/
*/
#include <iostream>
#include <string.h>
using namespace std;

int main ()
{	
	long leap_year, huluculu_year, bulukulu_year, primeira_vez = 0, Mod4, Mod100, Mod400, Mod15, Mod55, tamanho;
	char ano [1000000]; //fucking big number ano
	
	while (cin >> ano)
	{
		if (primeira_vez++)		
			cout << endl;
		leap_year = huluculu_year = bulukulu_year = Mod4 = Mod100 = Mod400 = Mod15 = Mod55 = tamanho = 0;
		tamanho = strlen(ano);

        for (int i=0; i< tamanho; i++) //operações de módulo com big numbers
		{
	            Mod4 = ((Mod4 * 10) + (ano[i]-'0')) % 4;
	            Mod100 = ((Mod100 * 10) + (ano[i]-'0')) % 100;
	            Mod400 = ((Mod400 * 10) + (ano[i]-'0')) % 400;
	            Mod15 = ((Mod15 * 10) + (ano[i]-'0')) % 15;
	            Mod55 = ((Mod55 * 10) + (ano[i]-'0')) % 55;
	    }

		if (Mod4 == 0 && (Mod100 != 0 || Mod400 == 0))
		{
			leap_year = 1;
			cout << "This is leap year." << endl;
		}
		if (Mod15 == 0)
		{
			huluculu_year = 1;
			cout << "This is huluculu festival year." << endl;
		}
		if ((Mod55 == 0) && (leap_year == 1))
		{
			bulukulu_year = 1;
			cout << "This is bulukulu festival year." << endl;
		}
		if ((leap_year == 0) && (huluculu_year == 0) && (bulukulu_year == 0))
			cout << "This is an ordinary year." << endl;
	}
	return 0;
}
