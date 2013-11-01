#include <iostream>
#include <stdio.h>
#include<cstdlib>
using namespace std;

int main() {
    int testcase, d1, m1, a1, d2, m2, a2, t = 0, idade = 0;
    string msg = "";
	cin >> testcase;
	while (testcase--) {
		scanf("%d/%d/%d",&d2,&m2,&a2); //atual
		scanf("%d/%d/%d",&d1,&m1,&a1); //nascimento
		if (d1 > d2) {
			d2 += 30;
			m1++;
		}
		if (m1 > m2) {
			m2 += 12;
			a1 += 1;
		}
		idade = a2 - a1;
		if (idade < 0)
			cout << "Case #" << ++t << ": " << "Invalid birth date" << endl;
		else if (idade > 130)
			cout << "Case #" << ++t << ": " << "Check birth date" << endl;
		else
			cout << "Case #" << ++t << ": " << idade << endl;
	}
	return 0;
}

