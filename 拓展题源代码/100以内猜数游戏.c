//与其说是猜数游戏，倒不如说是数字比对程序。
//毕竟开头都给了答案了。
#include <stdio.h>
int main(){
    int n,cishu;
    printf("请输入一个100以内的整数(别输入负的):\n");
    scanf("%d",&n);
    if(n>100||n<0){
        printf("叫你别乱输入来着,游戏结束\n");
        return 1;
    }
    printf("请输入允许猜测的次数:\n");
    scanf("%d",&cishu);
    for (int i = 1;i<=cishu;i++){
        int guess;
        printf("请输入你猜的数字:\n");
        scanf("%d",&guess);
        if(guess>n){
            printf("你猜的数字大了\n");
            printf("你猜错了,你还有%d次机会\n",cishu-i);
        }else if(guess<n){
            printf("你猜的数字小了\n");
            printf("你猜错了,你还有%d次机会\n",cishu-i);
        }else if((guess==n)&&(i==1)){
            printf("牛逼\n");
            break;
        }else if((guess == n) && (i <= 3) ){
            printf("运气不错\n");
            break;
        }else if((guess == n) && (i >3&&i<=cishu)){
            printf("你猜对了\n");
            break;
        }
    }
    printf("游戏结束\n");
    return 0;
}

