#include<iostream>
using namespace std;
int main()
{
int a,b,temp,ans=0;
cin>>a>>b;
for(int i=a;i<=b;i++)
{ 
temp=i;
while(temp>0)
{ 
if(temp%10==2)
ans++;
temp/=10;
}
}
cout<<ans<<endl; 
return 0;
}
