//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
bool prime[20000001];
void shiv(){
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int i=2;i*i<20000000;i++){
    if(prime[i]){
      for(int j=i*i;j<20000000;j+=i){
        prime[j]=false;
      }
    }
  }
}
ll a[1000005];
ll b[1000005];
int main()
{
  shiv();
  ll j=1;
  for(int i=2;i<20000000;i++){
    if(prime[i]==true && prime[i+2]==true){
      a[j]=i;
      b[j]=i+2;
      ++j;
    }
  }

    int n;
    while(cin>>n){
      cout<<"("<<a[n]<<", "<<b[n]<<")"<<"\n";
    }

    return 0;
}
