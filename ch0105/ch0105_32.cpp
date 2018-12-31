#include<bits/stdc++.h>
using namespace std;

int main()
{
int s=0,n,i;
cin>>n;
for(i=1;i<=n;++i)
{
int t=1;
for(int j=1;j<=i;++j)
t*=j;
s+=t;
}
cout<<s;
return 0;
}
