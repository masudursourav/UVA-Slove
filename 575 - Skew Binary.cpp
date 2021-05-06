#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  while(cin>>s){
    if(s=="0"){
      break;
    }
    long long int sum=0;
    int l=s.size();
    int temp=l;
      for(int i=0;i<l;i++){
        int r=s[i]-'0';
        sum+=r*(pow(2,temp)-1);
        --temp;
      }
      cout<<sum<<"\n";
  }
  return 0;
}
