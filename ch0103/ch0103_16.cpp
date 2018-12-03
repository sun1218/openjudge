#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	double x1,y1;
	scanf("%lf%lf",&x1,&y1);
	
	double x2,y2;
	scanf("%lf%lf",&x2,&y2);
	
	double ans;
	printf("%.3f",sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));
	
	return 0;
}
