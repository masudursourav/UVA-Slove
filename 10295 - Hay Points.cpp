#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<string,long int>m;
  int n,q;
  long long int sum=0;
  cin>>n>>q;
  while(n--){
    string s;
    long int in;
    cin>>s>>in;
    m[s]=in;
  }
  int i=0;
  sum=0;
  while(i<q){
    string r;
    cin>>r;
    if(m.count(r)){
      sum+=m[r];
    }
    if(r=="."){
      cout<<sum<<"\n";
      sum=0;
      ++i;
    }
  }
  return 0;
}
