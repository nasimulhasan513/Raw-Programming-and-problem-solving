#include<stdio.h>
#include<math.h>

int main(){
    int t,a,b,c;
    double s,area;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d%d",&a,&b,&c);
        int d,e,f;
        d=a+b;
        e=b+c;
        f=c+a;
        if(d>c&&e>a&&f>b){

        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.2lf\n",area);

        }
        else{
            printf("Oh, No!\n");
    }
    }
    return 0;
}
