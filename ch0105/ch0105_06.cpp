#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
	int n,best=0,least=1001;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		if (temp>best){
			best = temp;
		}
		if (least>temp){
			least = temp;
		}
	}
	printf("%d",(best-least));
	return 0;
}
