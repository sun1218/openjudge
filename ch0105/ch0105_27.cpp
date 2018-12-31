#include<bits/stdc++.h>
using namespace std;int main(){
int k,i=0;
double s=0;
cin>>k;
while(s<=k){
i++;s+=1.0/i;
}
cout << i;
}
