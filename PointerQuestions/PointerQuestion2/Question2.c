#include <stdio.h>

int main() {
	int a[8] = { 1, 2, 3, 4 };
	double *b = a;

	b += 2;

	printf("%d", b[0]);
	return 0;
}


//int는 4바이트 double은 8바이트로 double*에 +2를 하게 되면 총 16바이트만큼 주소를 건너뛰어 배열의 index4까지 주소가 옮겨져 0이 나옴