#include <bits/stdc++.h>
using namespace std;
int main()
{
  int h,m,t;
  cin>>t;
  while(t--){
    scanf("%2d:%2d",&h,&m);
    h=12-h;
    if(m>0){
    m=60-m;
    --h;
  }
    if(h<=0){
      if(h==0)
      h=12;
      else{
        h=h+12;
      }
    }
    printf("%02d:%02d\n",h,m);
  }
  return 0;
}
