/*
* 12602 - Nice Licence Plates
* Conversão de bases numéricas.
* ABC-1234
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int transformaEmNumero(char letra);

int main ()
{	
	int N, valorLetras, valorNumeros;
	string placa = "";
	cin >> N;

	while (N--) {
		cin >> placa;
		valorLetras = ((int)placa[0]-65)* pow(26,2) + ((int)placa[1]-65) * 26 + ((int)placa[2]-65);
		valorNumeros = transformaEmNumero(placa[4]) * 1000 + transformaEmNumero(placa[5]) * 100 + transformaEmNumero(placa[6]) * 10 + transformaEmNumero(placa[7]);
		if (abs(valorLetras - valorNumeros) <= 100)
			cout << "nice" << endl;
		else
			cout << "not nice" << endl;
	}
	return 0;
}

int transformaEmNumero(char c) {
		if (c == '0')
			return 0;
		if (c == '1')
			return 1;
		if (c == '2')
			return 2;
		if (c == '3')
			return 3;
		if (c == '4')
			return 4;
		if (c == '5')
			return 5;
		if (c == '6')
			return 6;
		if (c == '7')
			return 7;
		if (c == '8')
			return 8;
		if (c == '9')
			return 9;
}
