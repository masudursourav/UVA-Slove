#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x,y,z,t;
  cin>>t;
  while(t--){
    cin>>x>>y>>z;
    cout<<z*(2*x-y)/(x+y)<<"\n";
  }
  return 0;
}
