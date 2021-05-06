//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
bool prime[1000001];
void shiv(){
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int i=2;i*i<=1000000;i++){
    if(prime[i]){
      for(int j=i*i;j<1000000;j+=i){
        prime[j]=false;
      }
    }
  }
}
int main()
{
   shiv();
    int n;
    while(cin>>n){
      if(n==0){
        break;
      }
      for(int i=2;;i++){
        if(prime[i]){
          int sum=n-i;
          if(prime[sum]){
            cout<<n<<" = "<<i<<" + "<<sum<<"\n";
          }
        }
      }
    }

    return 0;
}
