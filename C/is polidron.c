#include<stdio.h>
#include<string.h>
int main(){
char a[100];
gets(a);
int flag=0;
int n=strlen(a);

for(int j=0; j<n; j++)
{
if(a[j]!=a[n-j-1])
{
    flag=1;
}
}
if(flag)
{
    printf("No");
}
else
{
    printf("Yes");
}

 return 0;
}
