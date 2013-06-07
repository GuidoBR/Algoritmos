// Fibonnaci
// Funções comuns
// Fib[0] = 1, Fib[1] = 1, Fib[2] = 2, ...

#include <iostream>
#include <climits>
#define MAXIMO 100000
//INT_MAX

using namespace std;

int vFibonnaci[MAXIMO];

void preFibonnaci() {
	vFibonnaci[0] = vFibonnaci[1] = 1;
	for (int i = 2; i <= MAXIMO; i++)
		vFibonnaci[i] = vFibonnaci[i-1] + vFibonnaci[i-2];
}

int fibonacci(int n) {
  int u = 0;
  int v = 1;
  int i, t;

  for(i = 2; i <= n; i++) {
    t = u + v;
    u = v;
    v = t;
  }
  return v;
}

int fibonacciR(int n) {
  if (n < 2)
    return n;
  else
    return fibonacciR(n-1) + fibonacciR(n-2);
}

int main() {
	int n;
	preFibonnaci();
	
	for (int i = 0; i <= 5; i++)
				cout << "FibI: " << fibonnaci(i) << " | FibR " << fibonnaciR(i) << " | PréFib " << vFibonnaci[i];
	
	cout << endl;
				
	while (cin >> n) {
		cout << "Fibonnaci Iterativo: " << fibonnaci(n) << " | Fibonnaci Recursivo " << fibonnaciR(n) << " | Pré-Fibonnaci " << vFibonnaci[n] << endl;
	}
}
