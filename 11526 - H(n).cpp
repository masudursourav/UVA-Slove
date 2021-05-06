#include <bits/stdc++.h>
using namespace std;
long long int H(int n){
long long int res = 0;
for( int i = 1; i <= n; i++ ){
res =res + n/i;
}
return res;
}
int main()
{
  long long int n,t,res;
  cin>>t;
  while(t--){
    cin>>n;
   cout<<H(n)<<"\n";
 }
 return 0;
}
