#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	if (n>0){
		printf("positive");
	}
	else if (n==0){
		printf("zero");
	}
	else{
		printf("negative");
	}
	
	return 0;
}
