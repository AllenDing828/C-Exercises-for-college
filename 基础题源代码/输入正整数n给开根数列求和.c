#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("请输入一个正整数n:");
    scanf("%d", &n);
    if (n <= 0) {
        printf("输入的不是正整数。\n");
        return 1;
    }
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += sqrt(i);
    }
    printf("前%d项的和为: %.2f\n", n, sum);

    return 0;
}