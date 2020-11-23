#include<stdio.h>
int main(){
    int a,b,c,i,j;
    scanf("%d",&j);
    i=1;
    if(j>=0&&j<100){
    while(i<=j){
    scanf("%d%d%d",&a,&b,&c);
    if(a!=EOF&&a<1000&&b!=EOF&&b<1000&&c!=EOF&&c<1000){
    if(a>b&&a>c){
        printf("%d\n",a);
    }
    else if(b>c){
        printf("%d\n",b);
    }
    else{
        printf("%d\n",c);
    }
    }
    i++;
    }
    }
    return 0;
}
