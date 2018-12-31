#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a,b,c,d=0,i,n;
cin>>a;
cin>>b;
for (i=1;i<=b;i++)
{
cin>>c;
if (c<=a) a=a-c;
else d++;
}
cout<<d;
}
