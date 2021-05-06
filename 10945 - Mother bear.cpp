#include <bits/stdc++.h>
using namespace std;
int main()
{
  string r,s;
 
  while(getline(cin,s)){
    int l=s.size();
    int j=0;
    for(int i=0;i<l;i++){
      if(s[i]>='A' && s[i]<='Z'){
        r[j]=s[i]+32;
        cout<<r[j]<<"\n";
        ++j;
      }
      else if(s[i]>='a' && s[i]<='z'){
        r[j]=s[i];
        cout<<r[j];
        ++j;
      }
    }
    string t=r;
    cout<<r<<"\n";
    reverse(r.begin(),r.end());
    cout<<r<<"\n";
    if(t==r){
      cout<<"l"<<"\n";
    }
    else{
      cout<<"b"<<"\n";
    }
    }
  }
