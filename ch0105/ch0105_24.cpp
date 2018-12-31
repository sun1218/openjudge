#include<iostream>
using namespace std;
int main(){
int n, a , b, s = 0, max = 0;
cin >> n;
for(int i = 0; i < n; i ++){
cin >> a >> b;
if(a >= 90 && a <= 140 && b >= 60 && b <= 90){
s ++;
if(s > max){
max = s;
}
}else{
s = 0;
}	
} 
cout << max;
}
