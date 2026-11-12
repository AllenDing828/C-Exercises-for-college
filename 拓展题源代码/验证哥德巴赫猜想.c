#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("请输入一个偶数:\n");
    scanf("%d",&n);
    if(n%2==1){
        printf("你输入的不是偶数\n");
        return 1;
    }
    int flag=1;
    for(int i=2;i<=n/2;i++){
      for(int j=2;j<=sqrt(i);j++){
        if(i%j==0){
          flag=0;
        }else{
          flag=1;
        }
      }
      if(flag==1){
        if(n-i>1){
            for(int k=2;k<=sqrt(n-i);k++){
                if((n-i)%k==0){
                    flag=0;
                }
            }
            
        }
      }
      if(flag==1){
                printf("%d=%d+%d\n",n,i,n-i);
                break;
            }
    }
    return 0;
}  //这简就是一坨充斥着循环的答辩呀（悲），烦死我力