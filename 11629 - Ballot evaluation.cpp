#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>m;
  int n,t;
  int sum=0;
  string s;
  double in;
  cin>>n>>t;
  while(n--){
    cin>>s;
    cin>>in;
    int k=in*10;
    m[s]=k;
  }
  int ch;
  int c=0;
  int i=0;
  while(t--){
    sum=0;
    c=0;
    while(1){
     cin>>s;
     if(s=="<" || s==">" || s=="<=" || s==">=" || s=="="){
       cin>>ch;
       if(s=="<" && sum<(ch*10)){
         c=1;
         break;
       }
       else if(s==">" && sum>(ch*10)){
         c=1;
         break;
       }
       else if(s=="<=" && sum<=(ch*10)){
         c=1;
         break;
       }
       else if(s==">=" && sum>=(ch*10)){
         c=1;
         break;
       }
       else if(s=="=" && sum==(ch*10)){
         c=1;
         break;
       }
      break;
    }
     if(m.count(s)){
       sum+=m[s];
     }
    }
    if(c==1){
      cout<<"Guess #"<<++i<<" was correct."<<"\n";
    }
    else{
      cout<<"Guess #"<<++i<<" was incorrect."<<"\n";
    }
  }
  return 0;
}
