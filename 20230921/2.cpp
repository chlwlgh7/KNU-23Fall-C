#include <stdio.h>
int main(void) {
	int sel, num1, num2;

	printf("숫자1 :");
	scanf_s("%lf", &num1);
	
	printf("숫자2 :");
	scanf_s("%lf", &num2);

	printf("1.더하기 2. 빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);

	calculator(sel, num1, num2);

	return 0;
}
int sum(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}
void calculator(int sel, int num1, int num2) {
	double num1, num2;

	if (sel < 1 || selector > 4)
		printf("오류");
	if (sel == 1)sum(num1, num2);
	else if (sel == 2)sub(num1, num2);
	else if (sel == 3)mul(num1, num2);
	else if (sel == 4)div(num1, num2);

}