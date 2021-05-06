#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s,r,t;
  while(cin>>s){
    r=s;
    int l=s.size();
    int c=0;
    for(int i=0;i<l;i++){
      if(s[i]=='8' || s[i]=='1'){
        ++c;
      }
      else if(s[i]=='J'){
        s[i]='L';
        ++c;
      }
      else if(s[i]=='L'){
        s[i]='J';
        ++c;
      }
      else if(s[i]=='0'){
        s[i]='O';
        ++c;
      }
      else if(s[i]=='2'){
        s[i]='S';
        ++c;
      }
      else if(s[i]=='5'){
        s[i]='Z';
        ++c;
      }
      else if(s[i]=='3'){
        s[i]='E';
        ++c;
      }
    }
    reverse(s.begin(),s.end());
    if(r==s && c==0){
      cout<<"p"<<"\n";
    }
    else if(r==s && c>0){
      cout<<"mp"<<"\n";
    }
    else{
      cout<<"n"<<"\n";
    }
  }
}
