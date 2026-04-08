#include <stdio.h>

int main()
{

    int b = 0;
    int c= 0;
    
    for (int a=10000; a<=99999; a++)
    {
        int sum = 0;
        for(int i = 10; i<=10000; i*=10)
        {
            b = a / i;
            c = a % i;
            sum += b*c;  
        }
        if(sum==a)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}