#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
  int i,j,k=0;
  while(cin>>s){
  int t,l;
  cin>>t;
  cout<<"Case "<<++k<<":"<<"\n";
  while(t--){
    l=0;
    cin>>i>>j;
    l=(max(i,j)-min(i,j))+1;
    int nz=0,no=0,cn=0,cz=0;
    for(int c=min(i,j);c<=max(i,j);c++){
      if(s[c]=='1'){
        ++no;
        ++cn;
        if(cz>0)
        break;
      }
      else{
        ++cz;
        ++nz;
        if(cn>0)
        break;
      }
    }
    if(no==l || nz==l){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }
}
return 0;
}
