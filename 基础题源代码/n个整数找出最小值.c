#include <stdio.h>
int main(){
    int n,shuzi,min;
    printf("请输入整数的个数:\n");
    scanf("%d",&n);
    printf("请输入%d个整数:\n",n);
    scanf("%d",&min);
    for(int i = 1;i < n;i++){
        scanf("%d",&shuzi);
        if(shuzi < min){
            min = shuzi;
        }
    }
    printf("最小值为:%d\n",min);
    return 0;
}