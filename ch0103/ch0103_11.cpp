#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	double x,y,r;
	int k;
	scanf("%lf%lf",&x,&y);
	k = x / y;
	r=x-k*y;
	printf("%g",r);
	return 0;
}
