#include<stdio.h>
int main(){
    double x;
    double y;
    double z;
    printf("输入两个数(这两个数用空格隔开):\n");
    scanf("%lf %lf",&x,&y);
    z=(x+y)*(x+y);
    printf("%.2lf\n",z);
}
