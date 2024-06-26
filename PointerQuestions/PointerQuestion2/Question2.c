#include <stdio.h>

int main() {
	int a[8] = { 1, 2, 3, 4 };
	double *b = a;

	b += 2;

	printf("%d", b[0]);
	return 0;
}