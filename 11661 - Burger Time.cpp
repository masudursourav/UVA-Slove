#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int n;
  string s;
  while(1){
    cin>>n;
    int a[100000]={0};
    if(n==0){
      break;
    }
    cin>>s;
    int c=0,r=0,d=0,k=0,rc=0,dc=0;
    for(int i=0;i<n;i++){
      if(s[i]=='Z'){
        cout<<"0"<<"\n";
        c=1;
        break;
      }
      else if(s[i]=='R'){
        r=i;
        rc=1;
        if(dc==1){
          a[k]=r-d;
          ++k;
          dc=0;
        }
      }
      else if(s[i]=='D'){
        d=i;
        dc=1;
        if(rc==1){
        a[k]=d-r;
        ++k;
        rc=0;
      }
      }
    }
    sort(a,a+k);
    if(!c){
      cout<<a[0]<<"\n";
    }
   }
   return 0;
  }
