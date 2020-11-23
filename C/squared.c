#include<stdio.h>
#include<math.h>
int main(){
 const unsigned int M = 1000000007;
 long long p = 1;
 int x,n,m;
 while(scanf("%d%d",&x,&n)){
        while (n != 0)
    {
        p *= x;
        --n;
    }
 m=p%M;
 printf("%d",m);
 }
 return 0;
}
