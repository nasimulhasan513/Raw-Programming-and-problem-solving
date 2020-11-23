#include<stdio.h>
int main(){
    int a,b,i,j;
    for(i=1; ;i++){
        for(j=2; ;j++){
            if((i*j)+i==57&&a>b){
                printf("%d\n%d\n",i,j);
                break;
            }
        }
    }
    return 0;
}
