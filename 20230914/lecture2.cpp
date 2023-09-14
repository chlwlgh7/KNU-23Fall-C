#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	char str[10];

	printf("문자 입력:");
	scanf_s("%c", &ch, sizeof(ch));
	printf("문자열입력:");
	scanf_s("%s", str, sizeof(str));

	printf("%c\n", ch);
	printf("%s", str);

	return 0;
}