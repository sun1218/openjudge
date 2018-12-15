#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n;
	double y;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		double temp;
		scanf("%lf",&temp);
		y += temp;
	}
	y /= n;
	printf("%.4f",y);
	return 0;
}
