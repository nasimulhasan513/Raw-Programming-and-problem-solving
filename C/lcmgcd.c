#include<stdio.h>
int main(){
    long long int a,b,i,t;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld%lld",&a,&b);
        if(a%b==0 || b%a==0){
            printf("ture\n");
        }
        else{
            printf("false\n");
        }
    }
    return 0;
}