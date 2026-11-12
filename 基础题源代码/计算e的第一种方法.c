#include <stdio.h>
int main(){
    double e = 1.0;int n;
    printf("请输入n的值:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        double fenmu = 1.0;
        for(int j=1;j<=i;j++){
            fenmu *= j;
        }
        e += 1.0/fenmu;
    }
    printf("e的值为: %.4lf\n", e);
    return 0;
}