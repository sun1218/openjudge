#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	double a,b,c,x1,x2;
	
	scanf("%lf%lf%lf",&a,&b,&c);
	x1 = (0-b + sqrt(b*b-4*a*c))/(2*a);
	x2 = (0-b - sqrt(b*b-4*a*c))/(2*a);
	if (b*b == 4 * a * c){
		printf("x1=x2=%.5f",x1);
	}
	else if (b*b > 4 * a * c){
		printf("x1=%.5f;x2=%.5f",x1,x2);
	}
	
	else if (b*b < 4 * a * c){
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",0-b / (2*a),sqrt(4*a*c-b*b) / (2*a),0-b / (2*a),sqrt(4*a*c-b*b) / (2*a));
	}
	return 0;
 } 
