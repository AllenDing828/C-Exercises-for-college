#include <stdio.h>
int main() {
    int n;
    printf("请输入一个正整数 : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("输入的数字不符合要求。\n");
        return 1;
    } 
    if ((n-1) % 3 !=0){
        printf("输入的数字不符合要求。\n");
        return 1;
    }
    double sum = 0;
    int sign = 1;
    for (int i = 1; i <= n; i += 3) {
        sum += sign * (1.0 / i);
        sign *= -1; 
    }
    printf("分母一次加3加到n的数列的和为(保留三位小数):%.3lf\n", sum);

}
