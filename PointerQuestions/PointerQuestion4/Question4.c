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


//b와 d는 주소에 할당 된 값이 없기 때문에 insert함수에서 10을 대입해도 적용이 되지 않고
//a는 포인터 변수를 초기화 해주지 않았기 때문에 쓰레기 값이 저장되어 c를 대입해도 적용되지 않는다.
//그러므로 결과값은 0 0 a의 주소가 나오게 된다.