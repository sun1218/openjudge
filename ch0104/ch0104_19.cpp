#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
	int a,b;
	char c;
	scanf("%d%d %c",&a,&b,&c);
	if (c == '/'){
		if (b == 0){
		printf("Divided by zero!");
		return 0;
		}
		printf("%d",(int)a/b);	
	}
	else if(c == '*'){
		printf("%d",(int)a*b);
	}	
	
	else if(c == '+'){
		printf("%d",(int)a+b);
	}	
	
	else if(c == '-'){
		printf("%d",(int)a-b);
	}	
	else {
		printf("Invalid operator!");
	}
	return 0;
 } 
