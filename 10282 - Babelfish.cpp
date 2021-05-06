#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<string,string>m;
  string s;
  while(getline(cin,s)){
    if(s==""){
      break;
    }
    stringstream ss(s);
    string a,b;
    ss>>a>>b;
    m[b]=a;
  }
  string in;
  while(cin>>in){
    if(m.count(in)==0){
      cout<<"eh"<<"\n";
    }
    else{
      cout<<m[in]<<"\n";
    }
  }
  return 0;
}
