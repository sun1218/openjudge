#include<iostream>
using namespace std;
int main()
{
int i,a,b,c,n;
for (i=81;i<=343;i++)
{
n=i;a=n%7;b=n/7%7;c=n/49;
if(a*81+b*9+c==n)
cout<<n<<endl<<c<<b<<a<<endl<<a<<b<<c<<endl;
}
return 0;
}
