#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
int main(void){
	int x,n;
	double c;
	scanf("%d%d",&x,&n);
	c = x;
	for(int i=0;i<n;i++){
		c += 0.001 * c;
	}
	printf("%.4f",c);
	return 0;
}
