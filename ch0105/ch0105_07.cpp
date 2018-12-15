#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n,x=0,y=0,z=0,c=0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int temp1,temp2,temp3;
		scanf("%d%d%d",&temp1,&temp2,&temp3);
		x += temp1;
		y += temp2;
		z += temp3;
	}
	c += (x+y+z);
	printf("%d %d %d %d",x,y,z,c);
	return 0;
}
