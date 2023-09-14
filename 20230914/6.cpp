#include <stdio.h>

int main(void)
{
	int input;

	printf("정수입력 :");
	scanf_s("%d", &input);

	if (input > 0)
		printf("양의정수 %d", input);
	else if (input < 0)
		printf("음의정수 %d", input);
	else
		printf("0");
	



	return 0;
}
