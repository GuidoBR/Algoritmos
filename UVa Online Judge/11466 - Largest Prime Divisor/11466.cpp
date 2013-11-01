#define MAX 10000001
#include <iostream>
#include <math.h>
#include <list>
using namespace std;

bool primes[MAX];
int primos[MAX];
int maxPrimes;
int fillPrimes(){
    for (unsigned long long i = 0; i < MAX; i++) {
        primes[i] = true;
    }
    primes[0] = primes[1] = false;
    for (unsigned long long i = 2; i < MAX; i++) {
        if (primes[i]){
           for (unsigned int j = 2; i * j < MAX; j++){
               primes[i*j] = false;
           }
        }
    }
    for (unsigned long long i = 0; i < MAX; i++) {
        if (primes[i]) {
           primos[maxPrimes++] = i;
        }
    }
    return 0;
}



bool isPrime(unsigned long long n) {
     if (n < MAX) {
        return primes[n];
     } else {
        for (int i = 0; i < maxPrimes; i++) {
            if ((n % primos[i]) == 0) return false;
        }
     }
}

long long maiorDivisor(unsigned long long n){
    if (n == 2) return -1;
    list<long long> divisoresPrimos;
    for (int i = 0; i < maxPrimes; ++i) {
        while ((n % primos[i]) == 0) {
              divisoresPrimos.push_back(primos[i]);
              n/=primos[i];
        }
        if (n == 1) break;
    }
    if (n != 1) divisoresPrimos.push_back(n);
    divisoresPrimos.unique();
    if (divisoresPrimos.size() > 1) {
       return divisoresPrimos.back();
    }
    return -1;
}

int main() {
    long long n;
    fillPrimes();
    while (cin >> n) {
        if (n == 0) break;
        if (n < 0) n*=-1;
        cout << maiorDivisor(n) << endl;
    }        
    return 0;
}
