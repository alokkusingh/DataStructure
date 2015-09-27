/*
 * HeapSort.c
 *
 *  Created on: 25-Aug-2011
 *      Author: Alok
 */

#include <HeapSort.h>
#include <stdio.h>

static unsigned int heapsize;

static void heapify(int*, unsigned int);
static void buildheap(int*, unsigned int);
static int left(unsigned int);
static int right(unsigned int);
static void swap(int*, int*);
static void parray(int*,int,int);

void hsort(int* arr, unsigned int length)
{
	heapsize = length - 1;
	buildheap(arr, length);

	while (heapsize > 0)
	{
		swap(arr + 0, arr + heapsize);
		heapsize--;
		heapify(arr, 0);
	}
}

static void buildheap(int* arr, unsigned int length)
{
	int i;
	for(i = (length / 2 - 1); i >= 0; i--)
	{
		heapify(arr, i);
	}
}

static void heapify(int* arr, unsigned int index)
{
	int mpos = index;
	int l = left(index);
	int r = right(index);

	if (l <= heapsize && *(arr + l) > *(arr + mpos))
		mpos = l;

	if (r <= heapsize && *(arr + r) > *(arr + mpos))
		mpos = r;

	if (mpos != index)
	{
		swap(arr + index, arr + mpos);
		heapify(arr, mpos);
	}
}

static int left(unsigned int index)
{
	return (index * 2 + 1);
}

static int right(unsigned int index)
{
	return (index * 2 + 2);
}

static void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

static void parray(int* arr, int start, int end)
{
	for (; start <= end; start++)
		printf("%d ", *(arr + start));
	printf("\n");
}

