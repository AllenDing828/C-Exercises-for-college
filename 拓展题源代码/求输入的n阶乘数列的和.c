#include <stdio.h>

long long fact(int x);

int main(){
    int n;
    printf("请输入一个正整数n:");
    scanf("%d",&n);
    if(n<=0){
        printf("输入有误\n");
        return 1;
        }else{
    long long result = 0;//result用来存储整体数列的和
    for(int i=1;i<=n;i++){
        result += fact(i);//i从1开始一直到n一个一个往fact里带，再相加赋值给result
    }
    printf("数列1!+2!+3!+...+%d!的和为:%lld\n",n,result);
}
return 0;
            }
long long fact (int x){
    long long sum = 1;
    for (int i = 1; i <= x; i++){
        sum *= i;
    }
    return sum;
}