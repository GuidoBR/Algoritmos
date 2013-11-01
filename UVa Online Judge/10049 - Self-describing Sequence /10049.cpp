#include <iostream>
#define TAMANHO 1000000
using namespace std;

int vColomb[TAMANHO], termo;
void precalcular();

int main() {
	int n;
	precalcular();
	while (cin >> n) {
		if (n == 0)
			break;
		for (int i = 1; i < termo; i++)
			if (n < vColomb[i]) {
				cout << i - 1 << endl;
				break;
			}
	}
	return 0;
}

void precalcular() {
	vColomb[1] = 1; vColomb[2] = 2; 
	vColomb[3] = 4; vColomb[4] = 6;
	vColomb[5] = 9; vColomb[6] = 12; 
	vColomb[7] = 16; 
	
	termo = 7;
	int posIni = 4, qtdRepeticao;
	
	while (vColomb[termo - 1] <= 2000001000) {
		qtdRepeticao = vColomb[posIni + 1] - vColomb[posIni];
		while (qtdRepeticao && vColomb[termo - 1] <= 2000001000) {
			vColomb[termo] = vColomb[termo - 1] + posIni;
			termo++;
			qtdRepeticao--;
		}
		posIni++;
	}
}