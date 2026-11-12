#include <stdio.h>
#include<math.h>
int jisuan(int n);
int main(){
    int n;
    printf("请输入一个整数n(n<20):\n");
    scanf("%d",&n);
    printf("梅森数有:\n");
    for(int i = 2;i<=n;i++){
       if(jisuan(i)){
        printf("%.0lf\n",pow(2,i)-1);
       }
    }
 return 0;
}
int jisuan(int n){
    int i=2,flag = 1;
    int x = pow(2,n)-1;
    for(i = 2;i<=sqrt(x);i++){
        if(x%i==0){
            flag = -1;
        }
    }
    if(flag == -1){
        return 0;
    }else{
        return 1;
    }
}
