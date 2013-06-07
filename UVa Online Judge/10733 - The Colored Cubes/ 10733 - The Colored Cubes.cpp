#include <iostream>
using namespace std;
#define ULL unsigned long long 

ULL FastExponentiation(ULL a, ULL b) {
    /*  Retorna a^b, com a e b de qualquer tipo de números inteiros.
        Usa Fast Exponentiation Algorithm, que é mais rápido que o pow() da biblioteca cmath, porém,
        só funciona para números inteiros.
        Referências:
        http://www.programminglogic.com/fast-exponentiation-algorithms/ - FE algorithm
        http://www.cprogramming.com/tutorial/bitwise_operators.html     - Bitwise operators
        */    
    ULL result = 1;
    while (b) {
        if (b&1) 
            result *= a;
        b >>=1 ;
        a *= a;
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        if (n <= 0)
            break;
        cout << ((FastExponentiation(n, 6) + 3 * FastExponentiation(n, 4) + 12 * FastExponentiation(n, 3) + 8 * FastExponentiation(n, 2)) / 24) << endl;
    }
    return 0;
}

// Referências:
// - http://www.algorithmist.com/index.php/UVa_10733
// - http://ajmarin.alwaysdata.net/codes/problems/381/
// - Palavras chave: Burnside's lemma, Análise combinatória, fórmula
