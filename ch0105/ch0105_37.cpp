#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,b,ans=0;
cin>>n;
for(int i=1;i<=n;i++)
{
int y=i;
bool is=true;
while(y)
{
if(y%10==7)is=false;
y/=10;
}
if(is==true&&i%7!=0)ans+=i*i;
}
cout<<ans<<endl;
}
