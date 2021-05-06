#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,in;
  while((scanf("%d",&t))!=EOF){
    int count=0;
    for(int i=0;i<5;i++){
      cin>>in;
      if(in==t){
        ++count;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}
