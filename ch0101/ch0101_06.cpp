#include <iostream>
#include <cstdio>

using namespace std;
int main(void)
{
	char char1;
	int int1;
	float float1;
	double double1;
	
	scanf("%c%d%f%lf", &char1,&int1,&float1,&double1);
	
	printf("%c %d %f %lf", char1,int1,float1,double1);
	return 0;
}
