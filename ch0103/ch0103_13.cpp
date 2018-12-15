#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n / 100;
	b=(n / 10 ) % 10;
	c=n % 10;
	printf("%d%d%d",c,b,a);
	return 0;
}
