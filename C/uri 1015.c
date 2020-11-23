#include<stdio.h>
#include<math.h>
int main(){

    double x1,pre_dist,x2,y1,y2,distance;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    //input taken
    double x=(x2-x1);
    double y=(y2-y1);
    pre_dist=x*x+y*y;
    distance=sqrt(pre_dist);
    //execution completed
    printf("%.4lf\n",distance);
    return 0;
}
