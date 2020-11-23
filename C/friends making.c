#include<stdio.h>
int main(){
    int a,i,count;
    count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        if(a%i==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
