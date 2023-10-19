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
	printf("학생수 입력:");
	scanf_s("%d", &num_student);
	s = (struct Student*)malloc(num_student * sizeof(struct Student));
	for (int i = 0; i < num_student; i++) {
		printf("학생 # %d - %d 학번입력:", num_student, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("학생 # %d - %d 이름입력:", num_student, i + 1);
		scanf_s("%s", &s[i].name);
		printf("학생 # %d - %d 성적입력:", num_student, i);
		scanf_s("%d", &(s[i].score));
	}
	
	for (int j = 0; j < num_student; j++) {
		printf("학생 %d - %d 학번 출력 : %d", &num_student, j + 1, &(s[j].sno));
		printf("학생 %d - %d 이름 출력 : %d", &num_student, j + 1, &s[j].name);
		printf("학생 %d - %d 성적 출력 : %d", &num_student, j, &(s[j].score));
	}
	return 0;
}