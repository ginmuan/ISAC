#include <stdio.h>

int main()
{
    int n = 0;
    int i=0;
    int j = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del;
    scanf("%d", &del);
    for (i = 0; i < n; i++)
    {
         if (arr[i] != del)
         {
            arr[j++] = arr[i];
            /* code */
         }
    }
    printf("Array after deletion: ");
    for (i = 0; i < j; i++)    {
        printf("%d ", arr[i]);
    }

    

    return 0;
}