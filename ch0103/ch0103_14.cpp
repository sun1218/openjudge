#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	int r,h,need=20 * 1000,asn;
	double pi=3.14159,v;
	scanf("%d%d",&h,&r);
	v = pi * r * r * h;
	asn = ceil(need / v);
	printf("%d",asn);
}
