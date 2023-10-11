#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

    int i = 0;
    int per = 0;
    double x = 0;
    double y = 0;
    double count = 0, circle = 0;

    srand((unsigned int)time(NULL));

    while (count < 100000)
    {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        count++;
        if ((x * x) + (y * y) <= 1)
        {
            circle++;
        }

        printf("%.2f%% 진행.. 원주율 : %.6f\n", (count / 100000) * 100, (circle / count) * 4);

        for (int i = 0; i < per; i += 5)
        {
            printf("■");
        }
    }
}