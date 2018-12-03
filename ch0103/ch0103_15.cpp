#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int x,y,n;
	scanf("%d%d%d",&n,&x,&y);
	printf("%d",(int)(n - y*(1.0/x)));
	return 0;
 } 
