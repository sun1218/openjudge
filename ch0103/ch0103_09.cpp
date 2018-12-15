#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	double r,d,s,c,pi=3.14159;
	scanf("%lf",&r);
	d = 2 * r;
	s = pi *(r*r);
	c = 2 * pi *r;
	printf("%0.4f %0.4f %0.4f",d,c,s);
	return 0;
}
