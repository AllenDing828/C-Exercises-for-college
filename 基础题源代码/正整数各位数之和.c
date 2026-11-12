#include <stdio.h>
int main(){
    int number;
    int weishu = 0,sum = 0;
    printf("请输入一个整数:\n");
    scanf("%d",&number);
    if(number < 0){
        printf("输入错误,请输入一个非负整数\n");
        return 1;
    }
    do{weishu++;
        sum += number % 10;
        number /= 10;
    }while(number > 0);
    printf("该整数的位数为:%d,各位数字之和为:%d\n",weishu,sum);
    return 0;
    
}