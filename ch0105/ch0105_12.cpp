#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n,m,x=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if (temp==m)x++;
	}
	printf("%d",x);
	return 0;
}
