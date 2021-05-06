#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  long long int t,digit=1;
  double sum=0;
  cin>>t;
  while(t--){
    cin>>s;
    int l=s.size();
    sum=0;
    for(int i=l-1;i>=0;i--){
      if(s[i]>='A' && s[i]<='Z'){
        if(s[i]=='C'){
          sum+=digit*12.01;
          digit=1;
        }
        else if(s[i]=='H'){
          sum+=digit*1.008;
          digit=1;
        }
        else if(s[i]=='O'){
          sum+=digit*16.00;
          digit=1;
        }
        else if(s[i]=='N'){
          sum+=digit*14.01;
          digit=1;
        }
      }
      else if(s[i]>='0' && s[i]<='9'){
        int r=s[i]-'0';
        if(s[i-1]>='0' && s[i-1]<='9')
        digit=digit*10+r;
        else
        digit=r;
      }
    }
    cout<<sum<<"\n";
  }
}
