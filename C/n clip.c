#include<stdio.h>

int main(){
	int a,b,t,i,total,el;
	scanf("%d%d",&t,&a);

	int arr[1000];
	for(i=0; i<t; i++)
	{
	scanf("%d",a[i]);
	}
	for(i=0; i<t; i++){
		el=a[i];
		if(el>b){
			b=1;
		}
	}
	if(b==1){
		total=a*t;
		if(total>=60){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}

	return 0;
}
