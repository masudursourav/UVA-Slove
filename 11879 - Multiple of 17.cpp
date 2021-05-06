#include <bits/stdc++.h>
using namespace std;
int main(){
  char in[10000];
  long int sum,r;
  while((scanf("%s",in))!=EOF){
    sum=0,r=0;
  int l=strlen(in);
  if(l==1 && in[0]=='0'){
    break;
  }
  for(int i=0;i<l;i++){
    sum=r*10+in[i]-'0';
    r=sum%17;
  }
    if(r==0){
      cout<<"1"<<"\n";
    }
    else{
      cout<<"0"<<"\n";
    }
  }
  return 0;
}
