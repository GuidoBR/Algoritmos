//113 - Power of Cryptography
//Guido Luz Percu - 27/05/2012
#include <math.h>
#include <stdio.h>

int main() {
  double n, p, k;
  while (scanf("%lf %lf", &n, &p) == 2) { //garantir que são 2 números
     //k = exp(log(p)/n);
	 k = pow(p, 1/n);
     printf("%.0lf\n", k);
  }
  return 0;
}
