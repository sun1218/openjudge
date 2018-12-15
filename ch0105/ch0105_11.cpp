#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n,x=0,y=0,z=0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if (temp==1)x++;
		if (temp==5)y++;
		if (temp==10)z++;
	}
	printf("%d\n%d\n%d",x,y,z);
	return 0;
}
