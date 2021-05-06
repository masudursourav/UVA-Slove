#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int h1,m1,h2,m2,h3,m3;
  while(1){
  h3=0,m3=0;
  cin>>h1>>m1>>h2>>m2;
  if(h1==0 && m1==0 && h2==0 && m2==0){
    break;
  }
  if(h2<h1){
    h3=(h2-h1)+24;
  }
  else{
  h3=h2-h1;
}
  if(h3==0 && m1>m2){
    h3=24;
  }
  m3=m2-m1;
  if(m3<0){
    m3=60+m3;
    if(h3!=0)
    h3=h3-1;
  }
  cout<<(h3*60)+m3<<"\n";
}
return 0;
}
