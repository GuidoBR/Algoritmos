#include <iostream>

using namespace std;

int main() {
	int largura, altura;
	cin >> largura >> altura;
	cout << max(largura/2 * altura, largura * altura/2);
	return 0;
}
