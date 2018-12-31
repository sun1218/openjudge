#include<cstdio>
#include<iostream>
#include<cmath> 
#include<math.h>
using namespace std;
int main(){
int n,t,s;
bool f;
cin>>n;
if(n==1)
{
cout<<2;
return 0;
}

else{
s=1;
t=1;
while(t<n)
{
s=s+2;
f=true;
for(int i=2;i<=ceil(sqrt(s));i++)
{if(s%i==0)
{ f=false;
break;
}}
if(f==true)
{
t++;
}

}
}
cout<<s;
return 0;
}
