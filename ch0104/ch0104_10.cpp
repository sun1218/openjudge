#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	if (n1<60&&n2<60){
	printf("0");
	} 
	else if (n1<60||n2<60){
	printf("1");
	} 
	else{
	printf("0"); 
	} 
	return 0;
} 
