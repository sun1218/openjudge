#include <iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
int main(void){
float a=200;
int c,d,e=0,f;
cin>>c>>d;
for(f=1;f<=20;f++)
{
e+=c;
if(e>=a)break;
else a=a+(a*0.01*d);
}
if(f>=20)cout<<"Impossible";
else cout<<f;
return 0;
}
