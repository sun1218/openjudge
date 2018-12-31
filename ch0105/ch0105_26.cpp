#include<iostream>
using namespace std;
int main(){
int i=1,n,a,w2,w3,s=0;
cin>>n;
while(i<=n){
cin>>a;
w2=a/10,w3=a/100;
if(a%10-a/1000-(w3-a/1000*10)-(w2-w3*10)>0)s++;
i++;
}
cout<<s;
return 0;
}
