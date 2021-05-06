#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum,sumf;
  while(scanf("%lld",&n)!=EOF){
    sum=0;
    sumf=0;
    sum=n;
    sumf=sum;
    int k=0;
    while(n>=3){
      sumf+=n/3;
      n=n%3+n/3;
    }
    if(n==2){
      ++sumf;
    }
    cout<<sumf<<"\n";
}
return 0;
}
