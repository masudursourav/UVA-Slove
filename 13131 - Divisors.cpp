#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int t,k,n,sum;
  cin>>t;
  while(t--){
    cin>>n>>k;
    sum=0;
    for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
        if(n/i==i){
          if(i%k!=0){
            sum=sum+i;
          }
        }
        else{
          if(i%k!=0){
            sum=sum+i;
          }
          if(((n/i)%k)!=0){
            sum=sum+(n/i);
          }
        }
      }
    }
    cout<<sum<<"\n";
  }
  return 0;
}
