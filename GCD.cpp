#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int N,G;
  while(1){
    cin>>N;
    if(N==0){
      break;
    }
    G=0;
   for(long int i=1;i<N;i++)
   for(long int j=i+1;j<=N;j++)
  {
    G+=__gcd(i,j);
   }
   cout<<G<<"\n";
  }
  return 0;
}
