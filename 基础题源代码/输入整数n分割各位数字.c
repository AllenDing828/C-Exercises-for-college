#include <stdio.h>
int main(){
    int n;
    printf("请输入一个整数n:\n");
    scanf("%d",&n);
   int chushu=1,temp=n;
   while(temp>9){
    chushu *=10;
    temp /=10;
   }
   printf("各位数字为:\n");
    while(chushu>0){
     printf("%d ",n/chushu);
     n %= chushu;
     chushu /=10;
    }
    printf("\n");
}