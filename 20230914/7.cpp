#include <stdio.h>

int main(void)
{
	int j;
	scanf_s("%d", &j);

	if (j > 100)
		printf("다시 입력하세요");
	else if (j >= 90)
		printf("A");
	else if (j >= 80)
		printf("B");
	else if (j >= 70)
		printf("C");
	else if (j >= 60)
		printf("D");
	else
		printf("F");

	return 0;
}