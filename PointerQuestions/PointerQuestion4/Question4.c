#include <stdio.h>


void Insert(int* a);

int main() {
	int c = 10;

	int* a;
	a = &c;
	int* b = NULL;
	int* d = 0;


	Insert(a);
	Insert(b);
	Insert(d);

	printf("%d\n", b);
	printf("%d\n", d);
	printf("%d\n", a);
	

	return 0;
}

void Insert(int* a) {

	if (a == NULL)
		*a = 10;
}


//b�� d�� �ּҿ� �Ҵ� �� ���� ���� ������ insert�Լ����� 10�� �����ص� ������ ���� �ʰ�
//a�� ������ ������ �ʱ�ȭ ������ �ʾұ� ������ ������ ���� ����Ǿ� c�� �����ص� ������� �ʴ´�.
//�׷��Ƿ� ������� 0 0 a�� �ּҰ� ������ �ȴ�.