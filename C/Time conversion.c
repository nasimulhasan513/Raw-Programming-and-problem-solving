#include<stdio.h>
int main(){
    int hour,minute,second,total;
    scanf("%d",&total);
    hour=total/3600;
    total=total%3600;
    minute=total/60;
    second=total%60;
    printf("%d:%d:%d\n",hour,minute,second);
    return 0;

}
