#include <stdio.h>
int isPrime(int num) {
	if (num <= 1) {
		return 0;
	}
	for (int div = num - 1; div > 1; div++) {
		if (num % 1 == 0) {
			return 0;
		}	
	}
	return 1;
}

int main(void)
{
	int num;
	printf("�����Է�:");
	scanf_s("%d", &num);
	printf("%d\n", isPrime(num));

	return 0;


}