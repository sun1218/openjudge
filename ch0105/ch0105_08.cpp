#include<iostream>
using namespace std;
int main(void)
{
	int n,s,i,d;
	cin>>n;
	s=(n-2)*180;
	for(i=0;i<n-1;i++)
	{
		cin>>d;
		s=s-d;
	}
	cout<<s;
	return 0;
}
