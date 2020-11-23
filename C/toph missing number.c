#include<stdio.h>
#include<stdint.h>
int main(){
    int32_t a,b,c,d;
    scanf("%d",&d);
    scanf("%d%d%d",&a,&b,&c);
    int mis_num;
    mis_num=d-(a+b+c);
    printf("%d\n",mis_num);
    return 0;
}
