#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,sum,d;
  string s[1000],s1;
  cin>>t;
  while(t--){
    cin>>n;
    sum=0;
    for(int i=0;i<n;i++){
      cin>>s[i];
      if(s[i]=="LEFT"){
        sum=sum-1;
      }
      else if(s[i]=="RIGHT"){
        sum=sum+1;
      }
      if(s[i]=="SAME"){
        cin>>s1;
        cin>>d;
        if(s[d-1]=="LEFT"){
          sum=sum-1;
          s[i]="LEFT";
        }
        else if(s[d-1]=="RIGHT"){
          sum=sum+1;
          s[i]="RIGHT";
        }
      }
    }
    cout<<sum<<"\n";
  }
  return 0;
}
