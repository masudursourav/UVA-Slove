#include <bits/stdc++.h>
using namespace std;
int n;
void check(int t){
  string s;
  getline(cin,s);
  int m=0,f=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='M'){
      ++m;
    }
    else if(s[i]=='F'){
      ++f;
    }
  }
  if(m==f && m>1 && f>1 && t!=n){
    cout<<"LOOP"<<"\n";
  }
  else if(t!=n){
    cout<<"NO LOOP"<<"\n";
  }
}
int main()
{
  cin>>n;
  int t;
  t=n;
  n=n+1;
  while(n--){
    check(t);
  }
  return 0;
}
