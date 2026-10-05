#include <stdio.h>
void jisuan (int x,int y){
    int ge,shi,bai;
    int sign=0;
    for(int i=x;i<=y;i++){
        bai=i/100;
        shi=i/10%10;
        ge=i%10;
        if(i==bai*bai*bai+shi*shi*shi+ge*ge*ge){
            printf("%d, ",i);
            sign=1;
        }
    }
    if(sign==0){
        printf("\b\b\b\b\b\b\b\b\b\b没有水仙花数\n");
    }   
}

int main() {
    int m,n;
    printf("请输入两个正整数m,n(100-999的数,m要小于等于n,两数之间要空格):");
    scanf("%d %d",&m,&n);
    if(m>n||m>999||n>999||m<100||n<100){
        printf("输入有误\n");
    return 1;
    }else{
        printf("水仙花数为:");
        jisuan(m, n);
    }
    
    return 0;

}