#include <stdio.h>
int main(){
    int n;
    printf("请输入一个正整数n:\n");
    scanf("%d",&n);
    double sum = 0,i=1;
    double fenzi = 2,fenmu = 1;
   for(i=1;i<=n;i++){
       sum += fenzi/fenmu;
       double temp = fenzi;
       fenzi = fenzi + fenmu;
       fenmu = temp;
       
   }
   printf("该分数列前%d项的和为:%.2lf\n",n,sum);
   return 0;
}