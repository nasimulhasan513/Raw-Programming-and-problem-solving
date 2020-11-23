//Fibonacci Series using Recursion
#include<stdio.h>
unsigned long long int fib(long long int n)
{
if (n <= 1)
	return n;
return fib(n-1) + fib(n-2);
}

int main ()
{
long long int n,res;

const unsigned int M = 1000000007;
while(scanf("%d",&n)!=EOF){
res=fib(n)%M;
printf("%lld",res);
}
return 0;
}
