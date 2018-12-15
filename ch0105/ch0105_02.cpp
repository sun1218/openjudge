#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	double money=0;
	for(int i=0;i<12;i++){
		double temp;
		scanf("%lf",&temp);
		money += temp;
	}
	money /= 12;
	printf("$%.2f",money);
	return 0;
}
