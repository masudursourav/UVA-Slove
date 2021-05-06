#include <bits/stdc++.h>
using namespace std;
int main()
{
  int y1,m1,d1,y2,m2,d2,y3,m3,d3,t,count=1;
  cin>>t;
  while(t--){
    y3=0,d3=0,m3=0;
    scanf("%2d/%2d/%4d",&d2,&m2,&y2);
    scanf("%2d/%2d/%4d",&d1,&m1,&y1);
    y3=y2-y1;
    d3=d2-d1;
    m3=m2-m1;
    if(d3<0){
      m3=m3-1;
    }
    cout<<"Case #"<<count<<": ";
    if(m3<0){
      y3=y3-1;
    }

    if(y3<0){
      cout<<"Invalid birth date"<<"\n";
    }
    else if(y3>130){
      cout<<"Check birth date"<<"\n";
    }
    else{
      cout<<y3<<"\n";
    }
   ++count;
  }
  return 0;
}
