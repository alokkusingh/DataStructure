#include <InsertionSort.h>

static void swap(void *a, void *b, size_t size)
{
    char *x = a, *y = b, temp;
    while(size--)
    {
		temp = *x;
		*x++ = *y;
		*y++ = temp;
    }
}

void isort(void *arr, size_t nmem, size_t size, int (*compare)(const void *, const void *))
{
    int i;
    for (i = 1; i < nmem ; i++)
    {
        int k = i - 1, x = 0;

        //in general insertion sort the key value should not be get changed,
        //but here we are working
        //with pointer, key will get changed so using x decrementing the index to
        //compare actual value key was pointing to befor get changed
        while (k >=0 && (compare(((char *)arr + (i-x)*size), ((char *)arr + k*size)) < 0))
        {
            swap(((char *)arr + (i-x)*size), ((char *)arr + k*size), size);
            k--;
            x++;
         }
    }
}
