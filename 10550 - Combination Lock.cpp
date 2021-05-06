#include <bits/stdc++.h>
using namespace std;
int main()
{
  int c0,c1,c2,c3;
  while(cin>>c0>>c1>>c2>>c3){
    if(c0==0 && c1==0 && c2==0 && c3==0){
      break;
    }
    int degree=1080;
    if((c0-c1)>0){
      degree+=(c0-c1)*9;
    }
    else{
        degree+=(c0-c1+40)*9;
    }
    if((c2-c1)>0){
      degree+=(c2-c1)*9;
    }
    else{
        degree+=(c2-c1+40)*9;
    }
    if((c2-c3)>0){
      degree+=(c2-c3)*9;
    }
    else{
        degree+=(c2-c3+40)*9;
    }
    cout<<degree<<"\n";
  }
}
