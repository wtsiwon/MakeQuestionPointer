#include <stdio.h>

int main() {
	int a[8] = { 1, 2, 3, 4 };
	double *b = a;

	b += 2;

	printf("%d", b[0]);
	return 0;
}


//int�� 4����Ʈ double�� 8����Ʈ�� double*�� +2�� �ϰ� �Ǹ� �� 16����Ʈ��ŭ �ּҸ� �ǳʶپ� �迭�� index4���� �ּҰ� �Ű��� 0�� ����