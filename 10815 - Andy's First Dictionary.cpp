#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<string>s;
  set<string>::iterator it;
  string in;
  while(cin>>in){
    s.insert(in);
  }
  for(it=s.begin();it!=s.end();it++){
    cout<<*it<<"\n";
  }
  return 0;
}
