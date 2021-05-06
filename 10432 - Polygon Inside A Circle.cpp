#include <bits/stdc++.h>
using namespace std;
int main()
{
  double r,n;
  while((scanf("%lf %lf",&r,&n))!=EOF){
    printf("%.3lf\n", n*r*r*sin(2*acos(-1)/n)/2);
  }
  return 0;
}
