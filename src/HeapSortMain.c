/*
 * HeapSortMain.c
 *
 *  Created on: 25-Aug-2011
 *      Author: Alok
 */
#include <stdio.h>
#include <HeapSort.h>

static void parray(int* arr, int start, int end)
{
	for (; start <= end; start++)
		printf("%d ", *(arr + start));
	printf("\n");
}

int main()
{
    int arr[] = {7, 4, 2, 1, 8, 3, 0, 9, 5, 6, 1, 2, 3, 9, 4, 0, 9};
	//int arr[] = {7, 4, 2, 1, 8, 3, 0, 9, 5, 6};
    int i;

    parray(arr, 0, (sizeof(arr) / sizeof(int)) - 1);

    hsort(arr, (sizeof(arr) / sizeof(int)));

    parray(arr, 0, (sizeof(arr) / sizeof(int)) - 1);

return 0;
}
