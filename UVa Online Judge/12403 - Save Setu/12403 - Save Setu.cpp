/*
* Guido Luz Percú - 03-07-2012	
* Input:
4
donate 1000
report
donate 500
report
*/
#include <iostream>
using namespace std;
 
int main() {
    int t, k, total = 0;
    string op;
 
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> op;
        if (op == "report")
           cout << total << endl;
        else {
           cin >> k;
           total += k;
           }
        }
    
    return 0;
    }
