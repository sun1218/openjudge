#include <iostream>
#include <stdio.h>
using namespace std;
int main(void) {
	int m,n,sum=0;
	cin>>m>>n;
	if(m%2==0) {
		m+=1;
	}	
	if(n%2==0) {
	n-=1;
	}
	for(int i=m;i<=n;i+=2){
	sum+=i;
	}
	cout<<sum;
	return 0;
}
