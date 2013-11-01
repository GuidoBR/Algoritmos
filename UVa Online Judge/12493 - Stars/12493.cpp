#include <iostream>
#include <map>
#include <math.h>
#define ULL unsigned long long
using namespace std;

ULL totient(ULL n)  { 
       ULL relativePrimes = n; 
       for(ULL i=2; i*i <= n; ++i) { 
         if (n % i == 0) relativePrimes -= relativePrimes / i; 
         while (n % i == 0) n /= i; 
       }
       if (n > 1) relativePrimes -= relativePrimes / n; 
       return relativePrimes; 
} 
int main() {
    ULL n;
    map<ULL,ULL> relativePrimesTo;
    while (cin >> n) {
          if (relativePrimesTo[n] == 0) {
             relativePrimesTo[n] = totient(n);
          }
          cout << relativePrimesTo[n]/2 << endl;
    }
    return 0;
}
