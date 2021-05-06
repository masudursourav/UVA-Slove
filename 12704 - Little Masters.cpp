#include <bits/stdc++.h>
using namespace std;
int main()
{
  double x,y,r,t;
  cin>>t;
  while(t--){
    double sum=0;
    cin>>x>>y>>r;
    sum=sqrt((x*x)+(y*y));
    printf("%.2lf %.2lf\n",abs(r-sum),(r+sum));
  }
  return 0;
}
