#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double l, c, r1, r2, distance, aux1,aux2;
    while (cin >> l >> c >> r1 >> r2, l != 0, c != 0, r1 != 0, r2 != 0) {
        aux1 = r2-(c-r1);
        aux2 = (l-r2)-r1;
       distance = sqrt(aux1*aux1+aux2*aux2);
       if (distance >=  r1 + r2 && ((max(r1,r2)*2) <= min(l,c))) {
          cout << "S" << endl;
       } else {
         cout << "N" << endl;
       }
    }
}