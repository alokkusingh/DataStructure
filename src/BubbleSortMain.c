/*
 * BubbleSortMain.c
 *
 *  Created on: 28-Aug-2011
 *      Author: Alok
 */
#include <stdio.h>
#include <BubbleSort.h>

static void parray(int* arr, int start, int end)
{
	for (; start <= end; start++)
		printf("%d ", *(arr + start));
	printf("\n");
}

int main()
{
    //int arr[] = {7, 4, 2, 1, 8, 3, 0, 9, 5, 6, 1, 2, 3, 9, 4, 0, 9};
	int arr[] = {7, 4, 2, 1, 8, 3, 0, 9, 5, 6};
	//int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//int arr[] = {0, 1, 2, 3, 4, 5, 6, 9, 8, 7};
	//int arr[] = {0, 1, 2, 3, 4, 5, 6, 8, 7, 9};
	//int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i;

    parray(arr, 0, (sizeof(arr) / sizeof(int)) - 1);

    bsort(arr, (sizeof(arr) / sizeof(int)));

    parray(arr, 0, (sizeof(arr) / sizeof(int)) - 1);

return 0;
}
