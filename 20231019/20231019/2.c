#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sum = 0;
    printf("�л��� �Է� : ");
    scanf("%d", &num);
    int* score = (int*)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("�л� %d-%d ���� �Է�: ", num, i + 1);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    printf("\n");

    for (int j = 0; j < num; j++)
    {
        printf("�л� %d-%d ���� ���: %d\n", num, j + 1, score[j]);
    }

    free(score);
    score = NULL;

    printf("\n");

    printf("����: %d\n", sum);
    printf("��� ����: %d\n", sum / num);

    return 0;
}