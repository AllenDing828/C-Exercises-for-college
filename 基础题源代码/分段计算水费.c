#include <stdio.h>
int main(){
    int x;double y;
    printf("请输入本月的用水量（吨）：");
    scanf("%d",&x);
    if(x<=15){
        y=4*x/3;
    }
        else{
            y=2.5*x-10.5;
        }
    printf("本月的水费为：%.2lf元\n",y);
    return 0;
}