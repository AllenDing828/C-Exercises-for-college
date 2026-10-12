#include <stdio.h>
#include <math.h>
double jisuan (int x,int y,int z);
int main(){
printf("请分别输入存款（元），存期(年），年利率（带小数点的）(用空格隔开）：");
int cunkuan, cunqi;double nianlilv;
scanf("%d %d %lf",&cunkuan,&cunqi,&nianlilv);
printf("您的到期本息合计（税前）为:%.2lf元\n",jisuan(cunkuan,cunqi,nianlilv));
return 0;
}
double jisuan (int x,int y,int z){
    double sum;
    sum=x*pow((1+z),y);
    return sum;
}
