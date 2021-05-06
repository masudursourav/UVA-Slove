#include <bits/stdc++.h>
using namespace std;
int main()
{
  double t,p,a,input,r;
  cin>>t;
  while(t--){
    r=0,p=0,a=0;
    cin>>input;
    r=input/5;
    a=3.141592653589793238*r*r;
    p=(input*(.6*input))-a;
    printf("%.2lf %.2lf\n",a,p);
  }
  return 0;
}
