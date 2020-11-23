#include <iostream>
using namespace std;

int main(){
	int a,b,t,i,total,el;
	cin>>t>>a;

	int arr[1000];
	for(i=0; i<t; i++)
	{
	cin>>arr[i];
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
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}

	return 0;
}
