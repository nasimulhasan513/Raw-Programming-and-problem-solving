#include<stdio.h>
int main(){
    int i,tk,ltk;

    int taka[7]={100,50,20,10,5,2,1};
    scanf("%d",&tk);
    printf("%d\n",tk);
    for(i=0;i<7;i++){
        ltk=tk/taka[i];
        tk=tk%taka[i];
        printf("%d nota(s) de R$ %d,00\n",ltk,taka[i]);
    }
    return 0;

}
