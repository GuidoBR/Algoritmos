#include <iostream>

using namespace std;

int main() {
	int vetorAltura[10005] = {0};
	int esq, dir, altura, alturaAtual;
	bool naoEhprimeiro;
	
	while(cin >> esq >> altura >> dir) 
		for (int i = esq; i < dir; ++i)
			if(altura > vetorAltura[i])
				vetorAltura[i] = altura;
	
	naoEhprimeiro = false;
	alturaAtual = 0;
	for (int x = 0; x != 10000; ++x) {
		if (vetorAltura[x] != alturaAtual) {
			if (naoEhprimeiro) 
				cout << " ";
			else 
				naoEhprimeiro = true;
			cout << x << " " << vetorAltura[x];
			alturaAtual = vetorAltura[x];
		}
	}
	cout << endl;
	return 0;
}