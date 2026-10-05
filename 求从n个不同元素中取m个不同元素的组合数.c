#include <stdio.h>
double fact(int n,int m) {
   int i;
   double njieguo =1;double mjieguo =1;
   double nmjieguo =1;double result;
   for(i=1;i<=n;i++){
       njieguo *= i;
   }
   for(i=1;i<=m;i++){
       mjieguo *= i;
   }
    for(i=1;i<=(n-m);i++){
         nmjieguo *= i;
    }
    result = njieguo/(mjieguo*nmjieguo);
    return result;
}
int main() {
    int m, n;
    printf("请输入两个整数m和n(需用空格隔开):");
    scanf("%d %d",&m,&n);
   if (m > n|| m < 0 || n < 0) {
        printf("输入的整数不符合要求。\n");
        return 1;
    }else{
        double final = fact(n, m);
        printf("共有%.0f种组合\n", final);
    }
    return 0;
    
}