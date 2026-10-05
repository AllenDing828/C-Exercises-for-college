#include <stdio.h>
int end(int n);
int main() {
    int n,sum;
    printf("请输入一个整数：\n");
    scanf("%d",&n);
    sum = end(n);
    printf("n的阶乘为:%d\n",end(n));
        return 0;
}
int end(int n) {
    int i, sum = 1;
    for(i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

