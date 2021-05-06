#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m,c,sum,sumf,t;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld %lld %lld",&n,&m,&c);
    sum=0;
    sumf=0;
    sum=n+m;
    sumf=0;
    int k=0;
    while(sum>=c){
      sumf+=sum/c;
      sum=sum%c+sum/c;
    }
    cout<<sumf<<"\n";
}
return 0;
}
