#include<iostream>
using namespace std;
int main()
{
int ys[13],m=0,jin=0,s;
for(int i=1;i<=12;i++)
cin>>ys[i];
for(int i=1;i<=12;i++){
jin=jin+300;
if(jin>=ys[i])
{s=jin-ys[i];m=m+s-s%100;jin=s%100;}
else
{cout<<'-'<<i;return 0;}}
cout<<jin+m*1.2<<endl;
return 0;
} 
