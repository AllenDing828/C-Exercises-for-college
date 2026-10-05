#include <stdio.h>
int main() {
    double account;double price;
    printf("请输入已用电量:");
    scanf("%lf",&account);
    if(account<0){
        printf("输入有误");
        return 1;
    }
    if(account==0){
        printf("牛逼，您没用电。\n");
        return 1;
    }
    if(account<=50){
        price=account*0.53;
        printf("电费为:%.2f元",price);
    }else{
        double extra=account-50;
        price=50*0.53+extra*0.58;
        printf("电费为:%.2lf元",price);
    }
    return 0;
}