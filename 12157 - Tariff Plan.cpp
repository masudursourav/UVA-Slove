#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,t1,c,m,j,count=1;
  cin>>t;
  while(t--){
    m=0,j=0;
    cin>>t1;
    while(t1--){
      cin>>c;
        m+=10*(c/29)+10;
        j+=15*(c/60)+15;
    }
    cout<<"Case "<<count<<": ";
    if(m<j){
      cout<<"Mile"<<" "<<m<<"\n";
    }

    else if(m==j){
      cout<<"Mile ";
    }
   if(j<=m){
      cout<<"Juice"<<" "<<j<<"\n";
    }
    ++count;
  }
  return 0;
}
