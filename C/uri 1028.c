#include<stdio.h>
int main(){
     int a,i,b,lcm,t,gcm,x;
     scanf("%d",&t);
     for(i=0;i<=t;i++){
        scanf("%d%d",&a,&b);
        if(a>b){
            x=a;
        }
        else{
            x=b;
        }
     }
     for(;x<=1;x--){

        if(x%a==0&&x%b==0){
            gcm=x;
        }
     }


}
