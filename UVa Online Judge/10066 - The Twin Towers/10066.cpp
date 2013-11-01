#include <iostream>
using namespace std;
int t1[110],t2[110],TM[110][110];

int SMC(int n,int m)
{
    for(int i=0;i<=n;i++)
        TM[i][0] = 0;
    for(int i=0;i<=m;i++)
        TM[0][i] = 0;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(t1[i]==t2[j])
                TM[i][j]=TM[i-1][j-1]+1;
            else
                TM[i][j]=max(TM[i-1][j],TM[i][j-1]);
    return TM[n][m];

}

int main() {
    int n1, n2, testcase =1;
    while(cin >> n1 >> n2)
    {
        if(n1==0 && n2==0)
			break;

        for(int i=1;i<=n1;i++)
            cin >> t1[i];

        for(int i=1;i<=n2;i++)
            cin >> t2[i];

        int saida = SMC(n1,n2);
        cout << "Twin Towers #" << testcase++ << endl << "Number of Tiles : " << saida << endl << endl;
    }
	return 0;
}



