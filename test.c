#include <stdio.h>  // 引入标准输入输出库，用于printf和scanf函数


int main() {
    int i = 0;
    int j = 0;
    int d = 0;
    int sum = 0;
    scanf("%d", &d);
    for(i=1;i<=d;i++) {
        int n=1;
        for(j=1;j<=i;j++) {

        n *= j;
        }
        sum += n;

    }

    printf("%d\n",sum);
    return 0;    
}
