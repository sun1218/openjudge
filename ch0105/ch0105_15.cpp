#include<stdio.h>
int main()
{
int j,y,ass;
double sum,k,i;
scanf("%lf%d%d",&i,&j,&y);
k=1+i/100;
sum=j;
for(int d=1;d<=y;d++)
{
sum=sum*k;
}
ass=sum;
printf("%d",ass);
}


