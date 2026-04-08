#include <stdio.h>

int count_1(int num)
{
    int count = 0;
    // for(int i = 0; i < 32; i++)
    // {
    //     if(((num >> i) & 1) == 1)
    //     {
    //         count++;
    //     }
    // }

    while (num)
    {
        num = num&(num-1);/* code */
        count++;

    }
    return count;

}

int main()
{
    int num = 0;
    scanf("%d", &num);
    int d = count_1(num);
    printf("%d\n", d);
}