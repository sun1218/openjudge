#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void){
	double m, walk,bike;
	scanf("%lf",&m);
	walk=m/1.2;
	bike=m/3.0+50;
	if(walk>bike){
		printf("Bike");
	}
	if(walk<bike){
		printf("Walk");
	}
	if(walk==bike){
	printf("All");
	}
	return 0;
}


