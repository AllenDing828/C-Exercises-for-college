#include <stdio.h>
int main(){
    double x,y;
    printf("请输入x的值：");
    scanf("%lf",&x);
    if(x!=0){
        y=1/x;
    }else{
        y=0;
    }
        printf("f(%.lf)=%.lf\n",x,y);
        return 0;
}