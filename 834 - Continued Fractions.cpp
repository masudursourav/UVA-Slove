#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m;
  while(scanf("%lld %lld",&n,&m)!=EOF){
    long long int res1=n/m,res2=0;
    printf("[%lld",res1);
    int c=0;
    long long int temp=m,temp2;
    long long int r=n%m;
    while(r!=0){
      ++c;
      res2=0;
      res2=temp/r;
      if(c==1){
      printf(";%lld",res2);
    }
    else{
        printf("%lld",res2);
    }
      temp2=temp;
      temp=r;
      r=temp2%r;
      if(r!=0){
        printf(",");
      }
    }
    printf("]\n");
  }
  return 0;
}
