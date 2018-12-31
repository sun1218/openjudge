#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double a,b,n,s=1,c=1;
scanf("%lf",&n);
for(a=1;a<=n;a++)
{
for(b=1;b<=a;b++)
{
c=c*b;
}
s=s+1/c;
c=1;
}
printf("%.10lf",s);
return 0;
}
