#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	int a1,a2,n;
	scanf("%d%d%d",&a1,&a2,&n);
	
	int tolerance;
	tolerance = a1 + (n-1)*(a2-a1);
	printf("%d",tolerance);
	return 0;
}

