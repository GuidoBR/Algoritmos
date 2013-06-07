#include <iostream>

using namespace std;

int main() {
	int testcase, qtdMax, qtdPassageiros, sai, entra;
	cin >> testcase;
	qtdPassageiros = qtdMax = 0;
	
	while (testcase--) {
		cin >> sai >> entra;
		qtdPassageiros = qtdPassageiros - sai + entra;
		if (qtdPassageiros > qtdMax)
			qtdMax = qtdPassageiros;
	}
	
	cout << qtdMax;
	return 0;
}
