#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
double b=0,n,s,c=2,d=1,t;
scanf("%lf",&n);
for(a=1;a<=n;a++)
{
s=c/d;
b=b+s;
t=c;
c=c+d;
d=t;
}
printf("%.4lf",b);
return 0;
}
