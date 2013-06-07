#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


using namespace std;

int main() {
	char vString[2000];
	while(gets(vString)) {
		int c = 0, i = 0, tamanho = strlen(vString);
		while(i < tamanho) {
			while(!isalpha(vString[i]))
				i++;
			if (i < tamanho)
				c++;
			while(isalpha(vString[i]))
				i++;
		}
		printf("%d\n", c);
	}
	return 0;
}