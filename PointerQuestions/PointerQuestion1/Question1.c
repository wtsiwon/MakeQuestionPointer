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

//함수 매개변수에 *가 없기 때문에 정수형으로 변환된 주소가 들어가므로 a의 주소 +b(1)의 값이 나온다