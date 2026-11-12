#include <stdio.h>
int main(){
    int a, n;
    printf("请输入两个正整数a和n:\n");
    scanf("%d %d",&a,&n);
    long long sum = 0, temp = 0;
    for(int i=1;i<=n;i++){
        temp = temp *10 + a;
        sum += temp;
    }
    printf("数列和为: %lld\n", sum);
    return 0;
}