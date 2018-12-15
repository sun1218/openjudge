#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(void)
{
int a,p;
char b;
cin>>a>>b;
if (a<=1000) p=8;
else 
{
if ((a-1000)%500==0) p=8+(a-1000)/500*4;
else p=8+(a-1000)/500*4+4;
}
if (b=='y') p=p+5;
cout<<p;
return 0;
}
