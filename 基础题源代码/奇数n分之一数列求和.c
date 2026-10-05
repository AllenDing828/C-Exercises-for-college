#include <stdio.h>
int main() {
    int n;
    printf("请输入一个正整数（奇数）：");
    scanf("%d", &n);
    if (n % 2 == 0 ) {
        printf("输入的正整数不是奇数\n");
    } else {
        double sum = 0;
        for (int i = 1; i <= n; i += 2) {
            sum += 1.0 / i;
        }
        printf("奇数n分之一数列的和为(保留三位小数):%.3lf\n", sum);
    }
    return 0;
}