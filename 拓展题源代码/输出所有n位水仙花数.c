#include <stdio.h>
#include <math.h>
void shuixianhua(int x);
int main(){
    int n;
    printf("请输入一个正整数n(3-7):\n");
    scanf("%d", &n); 
    if(n<3||n>7){
        printf("输的太大了，算不过来。\n");
        return 1;
    }
    printf("所有%d位水仙花数为:\n", n);
    shuixianhua(n);
    return 0;
}
void shuixianhua(int x){
    int gewei,shiwei,baiwei,qianwei,wanwei,shiwanwei,baiwanwei;
    if(x==3){
        for(int i=100;i<1000;i++){
            gewei=i%10;
            shiwei=i/10%10;
            baiwei=i/100;
            if(pow(gewei,3)+pow(shiwei,3)+pow(baiwei,3)==i){
                printf("%d = %d^3 + %d^3 + %d^3\n", i, gewei, shiwei, baiwei);
            }
        }
    }else if(x==4){
        for(int i=1000;i<10000;i++){
            gewei=i%10;
            shiwei=i/10%10;
            baiwei=i/100%10;
            qianwei=i/1000;
            if(pow(gewei,4)+pow(shiwei,4)+pow(baiwei,4)+pow(qianwei,4)==i){
                printf("%d = %d^4 + %d^4 + %d^4 + %d^4\n", i, gewei, shiwei, baiwei, qianwei);
            }
        }
    }else if(x==5){
        for(int i=10000;i<100000;i++){
            gewei=i%10;
            shiwei=i/10%10;
            baiwei=i/100%10;
            qianwei=i/1000%10;
            wanwei=i/10000;
            if(pow(gewei,5)+pow(shiwei,5)+pow(baiwei,5)+pow(qianwei,5)+pow(wanwei,5)==i){
                printf("%d = %d^5 + %d^5 + %d^5 + %d^5 + %d^5\n", i, gewei, shiwei, baiwei, qianwei, wanwei);
            }
        }
    }else if(x==6){
        for(int i=100000;i<1000000;i++){
            gewei=i%10;
            shiwei=i/10%10;
            baiwei=i/100%10;
            qianwei=i/1000%10;
            wanwei=i/10000%10;
            shiwanwei=i/100000;
            if(pow(gewei,6)+pow(shiwei,6)+pow(baiwei,6)+pow(qianwei,6)+pow(wanwei,6)+pow(shiwanwei,6)==i){
                printf("%d = %d^6 + %d^6 + %d^6 + %d^6 + %d^6 + %d^6\n", i, gewei, shiwei, baiwei, qianwei, wanwei, shiwanwei);
            }
        }
    }else if(x==7){
        for(int i=1000000;i<10000000;i++){
            gewei=i%10;
            shiwei=i/10%10;
            baiwei=i/100%10;
            qianwei=i/1000%10;
            wanwei=i/10000%10;
            shiwanwei=i/100000%10;
            baiwanwei=i/1000000;
            if(pow(gewei,7)+pow(shiwei,7)+pow(baiwei,7)+pow(qianwei,7)+pow(wanwei,7)+pow(shiwanwei,7)+pow(baiwanwei,7)==i){
                printf("%d = %d^7 + %d^7 + %d^7 + %d^7 + %d^7 + %d^7 + %d^7\n", 
                i, gewei, shiwei, baiwei, qianwei, wanwei, shiwanwei, baiwanwei);
            }
        }
    }
}