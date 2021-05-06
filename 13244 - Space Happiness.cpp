#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,s,sum,sumr,n;
  cin>>t;
  while(t--){
    n=0;
    sum=0;
    sumr=0;
    cin>>s;
    n=((s+2)-1)/2;
    sum=n*((s+1)/2);
    sumr=sum+(sum-s);
    cout<<sumr<<"\n";
  }
  return 0;
}
