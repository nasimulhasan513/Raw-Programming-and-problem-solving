#include<stdio.h>
int main(){
    char num[5];
    int i,a,b,t,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%s",&num);
    a=num[0]-'0';
    b=num[4]-'0';
    sum=a+b;
    printf("Sum = %d\n",sum);
    }
    return 0;
}
