#include <iostream>
using namespace std;

char bombs[20][20];
char played[20][20];
char output[20][20];
int n;

int BOOM() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (bombs[i][j] == '*') {
               output[i][j] = '*';
            }
        }
    }
    return 0;
}
int minesNear(int i, int j) {
    int mines = 0;
        if (i != 0) {
            if (bombs[i-1][j] == '*') mines++;
            if (j != 0) {
                if (bombs[i-1][j-1] == '*') mines++;
            }
            if (j != n-1) {
                if (bombs[i-1][j+1] == '*' ) mines++;
            }
        }
        if (i != n-1) {
            if (bombs[i+1][j] == '*') mines++;
            if (j != 0) {
                if (bombs[i+1][j-1] == '*' ) mines++;
            }
            if (j != n-1) {
                if (bombs[i+1][j+1] == '*' ) mines++;
            }
        }
        
        if (j != 0) {
            if (bombs[i][j-1] == '*') mines++;
        }
        
        if (j != n-1) {
            if (bombs[i][j+1] == '*') mines++;
        }
        return mines;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
          cin >> n;
          for (int i = 0; i < n; ++i) {
              for (int j = 0; j < n; ++j) {
                  cin >> bombs[i][j];
              }
          }
          for (int i = 0; i < n; ++i) {
              for (int j = 0; j < n; ++j) {
                  cin >> played[i][j];
              }
          }
          for (int i = 0; i < n; ++i) {
              for (int j = 0; j < n; ++j) {
                  if (played[i][j] == 'x') {
                     output[i][j] = minesNear(i,j)+48;
                  } else {
                     output[i][j] = '.';
                  }
              }
          }
          for (int i = 0; i < n; ++i) {
              for (int j = 0; j < n; ++j) {
                 if (played[i][j] == 'x' && bombs[i][j] == '*') {
                    BOOM();
                 }
              }
          }
          for (int i = 0; i < n; ++i) {
               for (int j = 0; j < n; ++j) {
                   cout << output[i][j];
               }
               cout << endl;
          }
          if (t) cout << endl;
    }
    return 0;
}
