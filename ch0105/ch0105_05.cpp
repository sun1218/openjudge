#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n=0,best=0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if (temp>best){
			best = temp;
		}
	}
	printf("%d",best);
	return 0;
}
