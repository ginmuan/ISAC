#include<stdio.h>
#include <string.h> 

my_strlen(char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + my_strlen(str + 1);
    }

}

