#include<stdio.h>
int main(){
    int i,c,d;
    for(i=2; ;i++){
        c=i*i;
        d=i*i*i;
        if(c==d){
            printf("%d\n",i);
            break;
        }

    }
    return 0;
}
