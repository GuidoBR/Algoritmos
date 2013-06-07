#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    long long  x, k, a, b, p, q;
    cin >> t;
    while(t--) {
       cin >> x >> k; 
       a = floor((double)x/k);
       b = ceil((double)x/k);
       if (a == b) {
          p = 0;
          q = k;
       } else if (a+b == x){
          p = 1;
          q = 1;
       } else if (a == 1) {
          p = x;
          q = 0;
       } else {
         for(p = 0; p*a <= x; p++) {
            if((x-p*a)%b ==0) {
                q = (x-p*a)/b;
                break;
            }
         }
       }
       cout << p << " " << q << endl;
    } 
    return 0;
}
