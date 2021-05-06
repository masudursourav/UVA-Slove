#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,c,p,cv;
  vector<int>v;
  while(cin>>t>>c){
    if(t==0 && c==0){
      break;
    }
    for(int i=0;i<t;i++){
      int a;
      cin>>a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    p=1;
    int f=0;
     while(c--){
      cin>>cv;
    for(int i=0;i<t;t++){
      if(v[i]==cv){
        f=1;
        break;
      }
      ++p;
    }
  }
  if(f)
    cout<<p<<"\n";

    v.clear();
  }

}
