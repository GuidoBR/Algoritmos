/*
* Guido Luz Percú - 10-07-2012	
* Input:
HELLO HOLA HALLO BONJOUR CIAO ZDRAVSTVUJTE
* OBS: 3 WA só porque não vi, estava comparando if == russian ao invés de if zdravstvujte :'(
*/
#include <iostream>
using namespace std;

int main ()
{	
	string s, saida;
	int i = 0;
	while (cin >> s) 
	{
	i++;
	if (s == "#")
		break;
	else if (s == "HELLO")
		saida = "ENGLISH";
	else if (s == "HOLA")
		saida = "SPANISH";
	else if (s == "HALLO")
		saida = "GERMAN";
	else if (s == "BONJOUR")
		saida = "FRENCH";	
	else if (s == "CIAO")
		saida = "ITALIAN";
	else if (s == "ZDRAVSTVUJTE")
		saida = "RUSSIAN";
	else
		saida = "UNKNOWN";
	cout << "Case " << i << ": " << saida << endl;
	}
	return 0;
}
