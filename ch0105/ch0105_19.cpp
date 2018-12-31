#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void){
	int n,p;
	float x,y,t1,t2,t,count=0;
	double l;

	cin>>n;

	for(int i=1; i<=n; i++) {
		cin>>x>>y>>p;
		l=sqrt(x*x+y*y);
		t1=l/25;
		t2=1.5*p;
		t=t1+t2+count;
		count=t;
}

	if(count>(int)count){
		count=(int)count+1;
}
	else{
	count=(int)count;
}
	cout<<count;
	return 0;
}
	
