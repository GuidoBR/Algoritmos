//10071 - Back to High School Physics
//Guido Luz Percu - 27/05/2012


//s = s0 + v0t + (a*t^2)/2
//v = v0 + at
//A particle has initial velocity and constant acceleration. If its velocity after certain time is v then what will its displacement be in twice of that time? 
//s0 = 0 | v0 = ? | a = ? | Dados: v, t | Calcular S
#include <iostream>
using namespace std;
int main() 
{   
	double s, v, t;   
	while(!cin.eof()) { // ler até o final do arquivo
		cin >> v >> t;
		if (t!=0)
			s = ((v / t) * (2*t)*(2*t))/2;
		else 
			s = 0;
		if (!cin.eof())	cout << s << endl; // estranho, porque ele continou o loop mesmo cin.eof() sendo true?
	}
    return 0;
}
