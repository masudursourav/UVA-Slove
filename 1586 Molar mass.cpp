#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int t;
  cin>>t;
  while(t--){
  cin>>s;
  int a[100]={0};
  int j=0;
    for(int i=0;i<s.size();i++){
      if(s[i]>='0' && s[i]<='9'){
        a[j]=a[j]*10+s[i]-'0';
        if(i+1!=s.size()-1 && s[i+1]>='A' && s[i+1]<='Z')
        ++j;
      }
    }
    j=0;
    double sum=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='C'){
      if(a[j]>0){
      sum+=12.01*a[j];
      ++j;
      }
      else
      sum+=12.01;
    }
    else if(s[i]=='H'){
      if(a[j]>0){
      sum+=1.008*a[j];
      ++j;
    }
      else
      sum+=1.008;
    }
    else if(s[i]=='O'){
      if(a[j]>0){
      sum+=16.0*a[j];
      ++j;
    }
      else
      sum+=16.0;
    }
    else if(s[i]=='N'){
      if(a[j]>0){
      sum+=14.01*a[j];
      ++j;
    }
      else
      sum+=14.01;
    }
  }
  printf("%.3lf\n",sum);
}
return 0;
}
