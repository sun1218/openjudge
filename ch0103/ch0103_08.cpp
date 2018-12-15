#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	double c,f;
	scanf("%lf",&f);
	c = 5 * (f-32) / 9 ;
	printf("%0.5f",c);
	return 0;
}
