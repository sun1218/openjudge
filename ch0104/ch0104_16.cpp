#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a) {
	printf("yes");
	}
	else{
	printf("no");
	}
}
