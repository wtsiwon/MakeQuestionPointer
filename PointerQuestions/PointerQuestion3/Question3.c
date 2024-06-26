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