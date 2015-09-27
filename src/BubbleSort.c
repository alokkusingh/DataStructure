/*
 * BubbleSort.c
 *
 *  Created on: 28-Aug-2011
 *      Author: Alok
 */

typedef enum Boolean {false, true} boolean;

static void swap(int*, int*);

void bsort(int* arr, unsigned int length)
{
	int i, j;
	boolean swapped;

	for(i = 1; i <= length; i++)
	{
		swapped = false;
		j = length;
		for (; j >= i ; j--)
		{
			if (*(arr + j - 1) > *(arr + j))
			{
				swap(arr + j - 1, arr + j);
				swapped = true;
			}
		}

		if(!swapped)
			break;
	}
}

static void swap(int* a, int* b)
{
    //int temp = *a;
    //*a = *b;
    //*b = temp;

	//*a = (*a + *b) - (*b = *a)

	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
