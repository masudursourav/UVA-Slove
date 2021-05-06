#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    long long int temp=n;
    int c=0;
    long long int res=0;
    for(long int i=temp,j=0;c<=54;i--,c++){
      long int temp2=i;
      int sum=0;
      while(temp2>0){
        sum+=temp2%10;
        temp2=temp2/10;
      }
      if(i+sum==n){
        res=i;
      }
    }
    cout<<res<<"\n";
  }
  return 0;
}
