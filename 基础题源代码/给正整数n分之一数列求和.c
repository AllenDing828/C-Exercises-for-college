#include <stdio.h>
int main() {
    int n;
    printf("请输入一个整数n:");
    scanf("%d", &n);
    if (n < 0) {
        printf("输入的整数不符合要求。\n");
        return 1;
    }else{
        double sum = 0;
        for (int i=1; i<=n; i++) {
            sum += (1.0/i);
        }
        printf("数列求和结果为（小数点后三位）: %.3lf\n", sum);//结果最后保留了三位小数
    }
    return 0;
}
