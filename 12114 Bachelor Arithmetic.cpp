#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int b,s,i=0;
  while(cin>>b>>s){
    if(b==0 && s==0){
      break;
    }
    cout<<"Case "<<++i<<": ";
    if(b<=s && b>1){
      cout<<":-|"<<"\n";
    }
    else if(b>s){
      cout<<":-("<<"\n";
    }
    else if(b==0 || b==1){
      cout<<":-"<<"\\"<<"\n";
    }
  }
  return 0;
}
