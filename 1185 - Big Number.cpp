#include <bits/stdc++.h>
using namespace std;
int a[10000000];
double sum=1.0;
long long int sumi=0;
void collect(){
  a[0]=1;
  long long int j=1;
for(double i=1;i<=10000000;i++){
  sum+=log10(i);
  sumi=sum;
  a[j]=sumi;
  ++j;
}
}
int main()
{
  collect();
  long long int n,sumi=0,t;
  cin>>t;
  while(t--){
  cin>>n;
  cout<<a[n]<<"\n";
}
return 0;
}
