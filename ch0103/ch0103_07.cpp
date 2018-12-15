#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	double a,b,c,d,x,f;
	scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
	f=a*x*x*x+b*x*x+c*x+d;
	printf("%0.7lf",f);
	return 0;
}
