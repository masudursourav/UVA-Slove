#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  double a,b,l;
  cin>>t;
  while(t--){
    cin>>a>>b;
    l=b-a;
    if(l>0){
      long long int sumi = 0;
      double sum=ceil((sqrt(4.0*l))-1.0);
      sumi=sum;
      cout<<sumi<<"\n";
    }
    else{
    long long int sumi =0;
    sumi=l;
    cout<<sumi<<"\n";
  }
}
return 0;
}
