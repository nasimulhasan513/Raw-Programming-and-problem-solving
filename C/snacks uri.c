#include<stdio.h>
int main(){
    int a,b;
    float price,product;
    scanf("%d%d",&a,&b);
    if(a==1){
    product=b;
    price= product*4;
    printf("Total: R$ %0.2f\n",price);
    }
    else if(a==2){
    product=b;
    price= product*4.5;
    printf("Total: R$ %0.2f\n",price);
    }
    else if(a==3){
    product=b;
    price= product*5;
    printf("Total: R$ %0.2f\n",price);
    }
    else if(a==4){
    product=b;
    price= product*2;
    printf("Total: R$ %0.2f\n",price);
    }
    else{
    product=b;
    price= product*1.5;
    printf("Total: R$ %0.2f\n",price);
    }


    return 0;
}
