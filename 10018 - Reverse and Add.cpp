#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum=0,sumr=0,c=0,t,f=0;
  cin>>t;
  while(t--){
    cin>>n;
    sum=0,sumr=0,c=0,f=0;
    while(1){
      sum=n;
      while(n>0){
        sumr=sumr*10+n%10;
        n=n/10;
      }
      if(sum==sumr){
        f=sumr;
        break;
      }
      else{
        ++c;
        n=sum+sumr;
        sumr=0;
      }
    }
    cout<<c<<" "<<f<<"\n";
  }
  return 0;
}
