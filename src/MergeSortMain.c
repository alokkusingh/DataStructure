#include <stdio.h>
#include <MergeSort.h>


int main()
{
    int arr[] = {9, 4, 2, 1, 8, 7, 0, 3, 5, 6, 3, 7, 1, 4, 9, 2, 5, 1, 3, 1, 3, 1, 2, 3, 4, 5, 8, 6, 0, 11, 8, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;

    msort(arr, 0, (sizeof(arr) / sizeof(int)) - 1);

    for (i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");

return 0;
}
