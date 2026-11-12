#include <stdio.h>
double jisuan(int x);
int main(){
    int n;
    printf("请输入n的值:\n");
    scanf("%d",&n);
    printf("e的近似值为:%.4lf\n",jisuan(n));
   return 0;
}
double jisuan(int x){
    double e=1.0;
    double fenmu;
    for(int i=1;i<=x;i++){
        fenmu=1.0;
       for (int j=1;j<=i;j++){
            fenmu *= j;
        }
        e += 1.0/fenmu;
    }
    return e;
}
