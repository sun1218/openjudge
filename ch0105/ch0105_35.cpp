#include<bits/stdc++.h>
using namespace std;
int main() 
{
int M,N,X;
cin>>M>>N>>X;
while(N*X>=M&&M>=N)
{
X-=M/N+1;
N+=M/N;
}
cout<<N;
}
