#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main()
{
	int num_student;
	struct Student* s;
	printf("�л��� �Է�:");
	scanf_s("%d", &num_student);
	s = (struct Student*)malloc(num_student * sizeof(struct Student));
	for (int i = 0; i < num_student; i++) {
		printf("�л� # %d - %d �й��Է�:", num_student, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("�л� # %d - %d �̸��Է�:", num_student, i + 1);
		scanf_s("%s", &s[i].name);
		printf("�л� # %d - %d �����Է�:", num_student, i);
		scanf_s("%d", &(s[i].score));
	}
	
	for (int j = 0; j < num_student; j++) {
		printf("�л� %d - %d �й� ��� : %d", &num_student, j + 1, &(s[j].sno));
		printf("�л� %d - %d �̸� ��� : %d", &num_student, j + 1, &s[j].name);
		printf("�л� %d - %d ���� ��� : %d", &num_student, j, &(s[j].score));
	}
	return 0;
}