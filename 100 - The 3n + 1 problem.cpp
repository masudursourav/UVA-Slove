#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,j;
  while(scanf("%d %d",&i,&j)!=EOF){
    int c=1,mx=0;
    int a=i,b=j;
    if(i>j){
      swap(i,j);
    }
    while(i<=j){
      c=1;
      int n=i;
      while(n!=1){
        if(n%2==0){
          n=n/2;
          ++c;
        }
        else{
          n=3*n+1;
          ++c;
        }
      }
      if(c>mx){
        mx=c;
      }
      ++i;
    }
    printf("%d %d %d\n",a,b,mx);
  }
}
