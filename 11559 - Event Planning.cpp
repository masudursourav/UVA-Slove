#include<bits/stdc++.h>
using namespace  std;
int main()
{
long long int n,b,h,w;
long long int cost,p,a,t;
while(cin>>n>>b>>h>>w)
{
  cost=999999999999;
  while(h--)
  {
    cin>>p;
    for(int i=0;i<w;i++)
    {
      cin>>a;
      t=0;
      if(a>=n)
      {
        t=p*n;
        if(cost>t){
        cost=t;
      }
      }
    }
  }
  if(cost>b)
  cout<<"stay home"<<endl;
  else
  cout<<cost<<endl;
}
  return 0;
}
