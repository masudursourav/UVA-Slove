//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

ll powm(ll n,ll k){
  if(k==0){
    return 1;
  }
  ll sum=1;
  for(int i=0;i<k;i++){
    sum*=n;
  }
  return sum;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll n;
       cin>>n;
       while(n--){
         ll m;
         cin>>m;
         ll hex=0,temp=m;
         for(int i=0;temp>0;i++){
           hex+=(temp%10)*powm(16,i);
           temp/=10;
         }
         cout<<__builtin_popcount(m)<<" "<<__builtin_popcount(hex)<<"\n";
       }

      return 0;
}
