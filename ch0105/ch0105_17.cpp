#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
int main(void){
int k,i,a=1,b=1,c;
cin>>k;
if(k<=2)
cout<<"1";
else{
for(i=3;i<=k;i++){
c=a+b;
a=b;
b=c;
}
cout<<c;
}
return 0;
}


