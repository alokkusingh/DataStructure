#include <stdio.h>
#include <stdarg.h>
#include "InsertionSort.h"


int int_compare(const void *, const void *);
int float_compare(const void *, const void *);
int sum(int, ...);
int main()
{

    int array[] = {6,4,2,3,1,9,7,8,5,0};
	float array1[] = {1.2,1.1,0,7,3.2,9.5,9.3};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d ",*(array +i));
    } 
	printf("\n");

    isort(array, 10, sizeof(int), int_compare);

    for (i = 0; i < 10; i++)
    {
        printf("%d ",*(array + i));
    } 
	printf("\n");

    for (i = 0; i < 7; i++)
    {
        printf("%.2f ",*(array1 + i));
    } 
	printf("\n");
	isort(array1, 7, sizeof(float), float_compare);

    for (i = 0; i < 7; i++)
    {
        printf("%.2f ",*(array1 + i));
    } 
	printf("\n");

    printf("Sum of 1,2,3,4,5,6,7: %d\n",sum(7,1,2,3,4,5,6,7));
    return 0;
}

int int_compare(const void *a, const void *b) 
{
    return (*((int *)a) - *((int *)b)); 

}

int float_compare(const void *a, const void *b) 
{
	if (*((float *)a) > *((float *)b))
	{
		return 1;
	} 
	else if (*((float *)a) < *((float *)b))
	{
		return -1;
	} 
	else {
		return 0;
	}
}

int sum(int count, ...)
{

    va_list ap;
	int i, total = 0;

    va_start(ap, count);
	for (i = 0; i < count; i++)
	{
        total += va_arg(ap, int);
	}
	va_end(ap);
    return total;
}
