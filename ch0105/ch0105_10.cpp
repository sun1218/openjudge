#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int x,y,c=0;
	scanf("%d%d",&x,&y);
	for (;x<=y;x++){
		if (x%17==0){
			c += x;
		}
	}
	printf("%d",c);
	return 0;
}
