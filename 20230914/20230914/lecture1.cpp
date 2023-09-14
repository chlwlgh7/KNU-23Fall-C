#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0;
	printf("정수 입력:");
	scanf_s("%d", &num);
	printf("%d", num);

	return 0;
}