#include <stdio.h>

int main(void)
{
	int input;

	printf("�����Է� :");
	scanf_s("%d", &input);

	if (input > 0)
		printf("�������� %d", input);
	else if (input < 0)
		printf("�������� %d", input);
	else
		printf("0");
	



	return 0;
}