#include<stdio.h>


void sort(int arr[], int sz)
{
    int i, j, temp;
    for(i = 0;i< sz-1;i++)
    {
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main()
{
    int arr[10] = {5, 2, 8, 1, 9, 3, 7, 4, 6, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    sort(arr, sz);
    printf("Sorted array: ");
    for(int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}