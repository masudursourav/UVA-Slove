#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a,b,c;
  cin>>n;
  while(n--){
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
      cout<<"OK"<<"\n";
    }
    else{
      cout<<"Wrong!!"<<"\n";
    }
  }
  return 0;
}
