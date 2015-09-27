#include <QuickSort.h>
#include <stdio.h>

static void swap(int*, int*);
static int partition(int*, int, int);
static void parray(int*, int, int);

void qisort(int* arr, int start, int end)
{
    if (start < end)
    {
        int part;
        part = partition(arr, start, end);
        qisort(arr, start, part-1);
        qisort(arr, part+1, end);
    }
}

static int partition(int* arr, int start, int end)
{
    int fix = *(arr + start);
    int i = start, j = end, fixIndex = start;
    while(1)
    {
        while ((*(arr + j) >= fix) && (j > fixIndex))
        {
            j--;
        }
        if(i < j)
        {
            swap(arr + i, arr + j);
            fixIndex = j;
        }

        while ((*(arr + i) <= fix) && (i < fixIndex))
        {
            i++;
        }
        if(i < j)
        {
            swap(arr + i, arr + j);
            fixIndex = i;
        }

        if(i == j)
        {
            return i;
        }
    }
}

static void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

static void parray(int* arr, int start, int end)
{
    for (; start<=end; start++)
    {
        printf("%d ",*(arr+start));
    }
    printf("\n");
}
