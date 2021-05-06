#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<long long int>s;
  long long int n,m;
  while(1){
  scanf("%lld %lld",&n,&m);
  if(n==0 && m==0){
    break;
  }
  while(n--){
    long long int in;
    scanf("%lld",&in);
    s.insert(in);
  }
  long long int c=0;
  while(m--){
    long long int in;
    scanf("%lld",&in);
    if(s.find(in)!=s.end()){
      ++c;
    }
  }
  cout<<c<<"\n";
  s.clear();
}
return 0;
}
