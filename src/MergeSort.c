#include <MergeSort.h>
#include <stdlib.h>

int x = 10;

void merge(int*, int, int, int);

void msort(int* arr, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        msort(arr, start, mid);
        msort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

void merge(int* arr, int p, int q, int r)
{
     int *temp = (int *)malloc((r - p + 1) * sizeof(int));
     int q1 = p, r1 = q + 1, i = 0, j;
     while(q1 <= q && r1 <= r)
     {
        if (*(arr + q1) < *(arr + r1))
        {
            *(temp + i) = *(arr + q1);
            q1++;
        } else {
            *(temp + i) = *(arr + r1);
            r1++;
        }
        i++;
    }

    while(q1 <= q)
    {
            *(temp + i) = *(arr + q1);
            q1++;
            i++;
    }

    while(r1 <= r)
    {
            *(temp + i) = *(arr + r1);
            r1++;
            i++;
    }

    for (j = p, i = 0; j <= r ; i++, j++)
        *(arr + j) = *(temp + i);

    free(temp);
}
