#include <bits/stdc++.h>
using namespace std;
map<int,string>m;
map<int,string>::iterator it;
int main()
{
  int t,d,n;
  cin>>t;
  string s;
  int i=0;
  while(t--){
    int sum=0,in;
    cin>>n;
    while(n--){
      cin>>in;
      cin>>s;
      m[in]=s;
    }
    cin>>d;
    cin>>s;
    d=d+5;
    int c=0;
    for(it=m.begin();it!=m.end();it++){
      if(it->second==s){
		sum+=it->first;
        if(sum<=d){
          c=2;
          break;
        }
        else{
        c=1;
        break;
      }
    }
    else{
      sum+=it->first;
      continue;
    }
  }
    if(c==0){
      cout<<"Case "<<++i<<": Do your own homework!"<<"\n";
      continue;
    }
    else if(c==2){
      cout<<"Case "<<++i<<": Yesss"<<"\n";
      continue;
    }
    else{
      cout<<"Case "<<++i<<": Late"<<"\n";
      continue;
    }
    m.clear();
  }
  return 0;
}
