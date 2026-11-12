#include <stdio.h>
int main(){
    int n,cnt = 0;
    printf("输入你的零钱(单位：分):");
    scanf("%d",&n);
    int yifen,liangfen,wufen;
    for(wufen = 1;wufen <= n/5.0;wufen++){
        for(liangfen = 1;liangfen <= n/2.0;liangfen++){
           yifen = n - 2*liangfen - 5*wufen;
            if(yifen >= 1){
                    printf("1分:%d个,2分:%d个,5分:%d个\n",yifen,liangfen,wufen);
                    cnt++;
                }
            }
        }
    
    printf("总共有 %d 种组合方式\n", cnt);
    return 0;
}