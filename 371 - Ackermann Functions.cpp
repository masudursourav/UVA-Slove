#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,j;
  while(scanf("%d %d",&i,&j)!=EOF){
    if(i==0 && j==0){
      break;
    }
    int c=1,mx=0,st;
    int a=i,b=j;
    if(i>j){
      swap(i,j);
    }
    while(i<=j){
      c=0;
      int last =0;
      int n=i;
      while(last!=1 ){
        if(n%2==0){
          n=n/2;
          ++c;
        }
        else{
          n=3*n+1;
          ++c;
        }
        last=n;
      }
      if(c>mx){
        mx=c;
        st=i;
      }
      ++i;
    }
    printf("Between %d and %d, %d generates the longest sequence of %d values.\n",a,b,st,mx);
  }
  return 0;
}
