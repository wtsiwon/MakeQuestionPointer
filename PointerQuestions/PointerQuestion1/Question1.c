#include <stdio.h>

int Add(int a, int* b);

int main(void) {
	int c = 1;
	int d = 5;

	int* a = &d;
	int* b = &c;

	printf("%d", Add(a, b));

	return 0;
}

int Add(int a, int* b) { return a + *b; }