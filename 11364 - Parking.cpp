#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  vector<int>v;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    int r=v[v.size()-1]-v[0];
    cout<<2*r<<"\n";
    v.clear();
  }
  return 0;
}
