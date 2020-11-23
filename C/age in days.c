#include<stdio.h>
int main(){
    int day,year,month,days;
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    month=days/30;
    day=days%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}
