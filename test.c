#include <stdio.h>  // 引入标准输入输出库，用于printf和scanf函数


int main() {

    int a = 101;
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;    
}
