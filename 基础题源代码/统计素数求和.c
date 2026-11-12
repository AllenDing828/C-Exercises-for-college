#include <stdio.h>
#include <math.h>
int main(){
    int m,n,sum = 0,count = 0,k;
    printf("请输入两个整数:\n");
    scanf("%d %d",&m,&n);
    for(int i = m;i <= n;i++){
        int flag = 0;
        k = sqrt(i);
      for(int j = 2;j < i;j++){
        if(i % j == 0){
         flag = 1;
            break;
        }
    }
    if(flag == 0){
        count++;
        sum += i;
    }
}
    printf("从%d到%d之间的素数个数为:%d\n",m,n,count);
    printf("从%d到%d之间的素数和为:%d\n",m,n,sum);
    return 0;
}