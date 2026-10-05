#include <stdio.h>
int main() {
    int a, b, sum;
    printf("请输入第一个数: ");
    scanf("%d", &a);
    printf("请输入第二个数: ");
    scanf("%d", &b);
    sum = a + b;
    printf("两个数的和是: %d\n", sum);
    return 0;
}