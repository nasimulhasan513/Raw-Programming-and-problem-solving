#include<stdio.h>
int main(){
    int x;
    float y;
    double consum;
    scanf("%d%f",&x,&y);
    consum=x/y;
    printf("%.3lf km/l\n",consum);
}
