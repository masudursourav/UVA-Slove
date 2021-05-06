#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[7]={10,11,12,13,14,15};
  long long int hax1,hax2,sum,t;
  cin>>t;
  string s,s1;
  char c;
  while(t--){
    hax1=0,hax2=0,sum=0;
    cin>>s;
    cin>>c;
    cin>>s1;
    int l1=s.size();
    for(int i=0;i<s.size();i++){
      --l1;
      if(s[i]>='A' && s[i]<='F'){
        int ne=a[s[i]-'A'];
        hax1=hax1+ne*pow(16,l1);
      }
      else{
        int ne=(s[i]-'0');
        hax1=hax1+ne*pow(16,l1);
      }
    }
    int l2=s1.size();
    for(int i=0;i<s1.size();i++){
      --l2;
      if(s1[i]>='A' && s1[i]<='F'){
        int ne=a[s1[i]-'A'];
        hax2=hax2+ne*pow(16,l2);
      }
      else{
        int ne=(s1[i]-'0');
        hax2=hax2+ne*pow(16,l2);
      }
    }
    if(c=='+'){
    sum=hax1+hax2;
  }
  else if(c=='-'){
    sum=hax1-hax2;
  }
  char h1[13]={'0','0','0','0','0','0','0','0','0','0','0','0','0'};
  int j=0;
  while(hax1!=0){
    int r=hax1%2;
    h1[j]=r+'0';
    ++j;
    hax1=hax1/2;
  }
  for(int i=12;i>=0;i--){
    cout<<h1[i];
  }
  cout<<" "<<c<<" ";
  char h2[13]={'0','0','0','0','0','0','0','0','0','0','0','0','0'};
  int k=0;
  while(hax2!=0){
    int r=hax2%2;
    h2[k]=r+'0';
    ++k;
    hax2=hax2/2;
  }
  for(int i=12;i>=0;i--){
    cout<<h2[i];
  }
  cout<<" "<<"="<<" "<<sum<<"\n";
}
return 0;
}
