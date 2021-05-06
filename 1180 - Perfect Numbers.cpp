#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,c;
  cin>>t;
  while(t--){
    scanf("%lld,",&c);

    if(c == 2 || c == 3 || c == 5 || c == 7 ||c == 13 || c == 17){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }
  return 0;
}
