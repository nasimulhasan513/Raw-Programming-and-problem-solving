#include<stdio.h>
int mian(){
    int a,b,tk;
    int taka[7]={100,50,20,10,5,2,1};

    scanf("%d",&tk);
    printf("%d\n",tk);
    for(a=0;a<=6;a++){
        b=tk/taka[a];
        tk=tk%taka[a];
        printf("%d tka of %d,00\n",b,taka[a]);
    }

    return 0;
}
