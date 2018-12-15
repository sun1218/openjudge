#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	float f;
	scanf("%f",&f);
	if (f<0){
		printf("%0.2f",0-f);
	}
	else{
		printf("%.2f",f);
	}
	
	
	return 0;
}
