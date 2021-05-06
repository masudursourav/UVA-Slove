#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  while(cin>>n>>m){
    int count=0;
    if(n>m){
      swap(n,m);
    }
    for(int i=n;i<=m;i++){
      int d=0;
      int r=0;
      int p=i;
      int c1=0;
      int a[1000];
      while(p>0){
        r=p%10;
        p=p/10;
        a[c1]=r;
        ++c1;
        ++d;
      }
      int ch=0;
      for(int j=0;j<d;j++){
        for(int k=j+1;k<d;k++){
          if(a[j]==a[k]){
            ch=1;
            break;
          }
        }
        if(ch==1)
        break;
      }
      if(ch==0){
      ++count;
    }
    }
    cout<<count<<"\n";
  }
  return 0;
}
