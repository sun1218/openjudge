#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n;
	float y;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		y += temp;
	}
	y /= n;
	printf("%.2f",y);
}
