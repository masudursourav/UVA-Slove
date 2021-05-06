#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[10000];
  long long int t,n,k,x,count=1;
  cin>>t;
  while(t--){
    cin>>n>>k>>x;
    for(int i=1;i<=n;i++){
      a[i]=a[i-1]+i;
    }
    int lb=(x+k)-1;
    cout<<"Case "<<count<<": ";
    cout<<a[n]-(a[lb]-a[x-1])<<"\n";
    ++count;
  }
  return 0;
}
