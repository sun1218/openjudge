#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int x,y,n,ans;
	scanf("%d%d%d",&n,&x,&y);
	ans = (int)(n - y*(1.0/x));
	if (ans <= 0){
		printf("0");
	}
	else {
		printf("%d",ans);
	}
	return 0;
 } 
