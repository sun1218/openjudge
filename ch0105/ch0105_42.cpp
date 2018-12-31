#include<cstdio>
using namespace std;
int main()
{
int a,coin=0;
long long sum=0;
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
sum=sum+i;
if(a>sum)
coin+=i*i;
else if(a==sum)
{
coin+=i*i;
printf("%d",coin);
break; 
}
else
{
coin+=(a-(sum-i))*i;
printf("%d",coin);
break;
}
}
return 0;
}
