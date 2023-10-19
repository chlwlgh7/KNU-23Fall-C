#include <stdio.h>
#include <stdlib.h>
void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

void sort(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		int min = 999999;
		int min_idx = -1;

		for (int j = i; j < len; j++) {
			int val = arr[j];
			if (val < min) {
				min = val;
				min_idx = j;
			}
		}
	}
}



int main()
{
	int arr[5] = { 5,4,1,2,3 };

}