#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	float r1,r2,r;
	scanf("%f%f",&r1,&r2);
	r = 1/(1/r1 + 1/r2);
	printf("%0.2f",r);
	return 0;
}
