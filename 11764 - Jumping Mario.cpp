#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[1000];
  int t,n,h,l,c=1;
  cin>>t;
  while(t--){
    h=0,l=0;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
      if(a[i]<a[i+1]){
        ++h;
      }
      else if(a[i]>a[i+1]){
        ++l;
      }
    }
    cout<<"Case "<<c<<": "<<h<<" "<<l<<"\n";
    ++c;
  }
  return 0;
}
