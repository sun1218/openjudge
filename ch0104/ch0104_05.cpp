#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{	
	long long n1,n2;
	scanf("%ld%ld",&n1,&n2);
	if (n1==n2){
		cout<<'=';
	}
	else if(n1<n2){
		cout<<'<';
	}
	else{
		cout<<'>';
	}
	
	return 0;
}
