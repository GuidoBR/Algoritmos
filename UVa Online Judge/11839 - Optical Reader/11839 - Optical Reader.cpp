#include <iostream>
 
using namespace std;
 
int main() {
    int n, media;
    char alt;
    while (cin >> n) {    
        if (n == 0) break;
        for (int i = 0; i < n; ++i) {
            alt = ' ';
            for (int j = 0; j < 5; ++j) {
                cin >> media;
                if (media <= 127) {
                    if (alt == ' ') {
                      alt = j+65;
                    } else {
                      alt = '*';
                    }
                }
            }
            cout << (alt!=' '?alt:'*') << endl;
        }
    }
    return 0;
}
