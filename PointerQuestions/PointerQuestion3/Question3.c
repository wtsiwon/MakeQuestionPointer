#include <stdio.h>


int main() {

	int arr[5] = { 1,2,3,4,5 };

	int* p = arr;

	for (int i = 0; i < 5; i++)
	{
		i % 2 == 0 || i % 3 == 0 ? p++ : p--;
	}
	printf("%d", p[2]-1);

	return 0;
}

//i가 0,2,3,4일때 ++, 1일때 -- 결론적으로 +3이 된다. 이 과정에서 p는 index0 -> index3을 가리키게 되는데
//그러므로 p[2]는 배열의 크기를 넘어가게 된다. 여기서 p[2]-1은 자칫 주소 연산으로 착각해 5가 나온다라고 생각할 수 있지만 
//주소 연산이 아닌 역참조한 변수의 값에 -1을 하는 것이기 때문에 배열의 다음주소(할당X)를 정수형으로 바꾼다음 -1한 값이 나오게 된다.
//답: 배열의 다음주소를 10진수로 바꾼 값 -1