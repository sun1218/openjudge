#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n=0,y=0;
	double x=0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		y += temp;
	}
	x = (double)y;
	x /= (double)n;
	printf("%d %.5f",y,x);
	return 0;
}
