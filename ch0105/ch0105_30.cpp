#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,a,s=0;
cin>>n>>m;
if(n%19==0)
{
while(n>0)
{
a=n%10;
if(a==3)
s++;
n/=10;
}
}
if(s==m)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
