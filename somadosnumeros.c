#include <stdio.h>

int main() {
	int x = 1;
	int soma = 0;
	
	while(x <= 100) {
		soma = soma + x;
		x++;
	}
	printf("%d", soma);
}