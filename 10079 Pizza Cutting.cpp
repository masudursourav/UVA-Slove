#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  while(1){
    cin>>n;
    if(n<0){
      break;
    }
    n=(n*(n+1)/2)+1;
    cout<<n<<"\n";
  }
  return 0;
}
