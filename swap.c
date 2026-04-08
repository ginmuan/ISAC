#include <string.h>
#include <stdio.h>


int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    // Swap a and b
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}