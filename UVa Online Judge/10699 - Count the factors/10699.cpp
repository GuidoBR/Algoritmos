#include <iostream>
#include <math.h>
#include <list>
using namespace std;

bool isPrime(unsigned int n) {
       if (n == 1) return false;
       if (n % 2 == 0)
          return false;
       for (unsigned int i = 3; i * i <= n; i += 2) {
           if (n % i == 0)
              return false;
       }
       return true;
}


int numberOfPrimeFactors(int n) {
    if (n == 2) return 1;
    int count = 0;
    list<int> primeFactors;
    double rq = sqrt(n)+0.5;
    for (int i = 2; i < rq; ++i) {
        while ((n % i) == 0) {
              primeFactors.push_back(i);
              n/=i;
        }
    }
    if (isPrime(n)) {
       primeFactors.push_back(n);
    }
    primeFactors.sort();
    list<int>::iterator it;
    int first = 1;
    for (it = primeFactors.begin(); it != primeFactors.end(); it++) {
        if (*it != first) {
           count++;
           first = *it;
        }
    }
    return count;
}
int main() {
    int n;
    while (cin >> n, n !=0) {
          cout << n << " : " << numberOfPrimeFactors(n) << endl;
    }
}
