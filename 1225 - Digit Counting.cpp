#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,in,r;
  cin>>t;
  while(t--){
    int a[11]={0,0,0,0,0,0,0,0,0,0};
    r=0;
    cin>>in;
    if(in==0){
      a[0]++;
    }
    else{
    for(int i=1;i<=in;i++){
      int b=i;
    while(b!=0){
      r=b%10;
      a[r]++;
      b=b/10;
    }
  }
  }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<" "<<a[9]<<"\n";
  }
 return 0;
}
