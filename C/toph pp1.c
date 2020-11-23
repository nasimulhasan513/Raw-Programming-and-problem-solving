#include<stdio.h>
int main(){
    int i,j,k,t,m;
    while(scanf("%d",&t)!=EOF&&t<100){

    int l=t-1;
    for(i=1;i<=t;i++){
        for(j=l;j>=i;j--){
            printf(" ");
        }

        for(k=1;k<=i;k++){
            if(k!=i){
            printf("* ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");

    }
}

    return 0;
}
