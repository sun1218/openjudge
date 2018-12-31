#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
double x, s = 0;
cin >> x >> n;
for(int i = 0; i <= n; i ++){
s += pow(x, i);
}
printf("%.2lf", s);
}
