#include <iostream>
using namespace std;

void buscaNoMapa(int x, int y, int c1, int c2);
int main()
{
    int k, x, y, c1, c2;

    while(cin >> k)
    {
        if (k == 0)
            break;
        cin >> c1;
        cin >> c2;

        for (int i = 0; i < k; i++) {
            cin >> x;
            cin >> y;
            buscaNoMapa(x, y, c1, c2);
        }

    }
}

void buscaNoMapa(int x, int y, int c1, int c2)
{
    if ((x == c1) || (y == c2))
        cout << "divisa" << endl;
    else if ((x <= c1) && (y >= c2))
        cout << "NO" << endl;
    else if ((x >= c1) && (y >= c2))
        cout << "NE" << endl;
    else if ((x >= c1) && (y <= c2))
        cout << "SE" << endl;
    else if ((x <= c1) && (y <= c2))
        cout << "SO" << endl;
    else
        cout << "INDEFINIDO" << endl;
}
