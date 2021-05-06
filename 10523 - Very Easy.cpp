#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a,n,sum;
  while(cin>>n>>a){
    sum=0.0;
    for(auto i=1;i<=n;i++){
      sum+=i*pow(a,i);
    }
    printf("%.0lf\n",sum);
  }
  return 0;
}
