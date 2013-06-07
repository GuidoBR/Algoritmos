#include <stdio.h>

int main() {
    int h, m, a, b;
	float d;
	
	while(scanf("%d:%d", &h, &m) == 2) {
		if ((h == 0) && (m == 0))
			break;
		if (h == 12)
			h = 0; 
        a = h *5;
		if (a >= m)
			b = a - m;
		else
			b = (m - a);
		b *= 6;
		if (m > a)
			d = (float)b - (float) m / 2;
		else
			d = (float)b + (float) m / 2;
			
		if (d > 180)
			d = 360 - d;
		if (d < 0)	
			d = d / -1;
		
		printf("%.3f\n", d);
	}
	return 0;
}