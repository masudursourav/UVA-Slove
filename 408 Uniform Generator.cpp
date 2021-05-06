//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll step,mod;
       while(cin>>step>>mod){
         ll n=1000000000,m=1000000000;
         while(n>step){
             n/=10;
           cout<<" ";
         }
           cout<<step;
           while(m>mod){
               m/=10;
             cout<<" ";
         }
         cout<<mod<<"    ";
         if(__gcd(step,mod)==1){
           cout<<"Good Choice"<<"\n\n";
         }
         else{
           cout<<"Bad Choice"<<"\n\n";
         }
       }

      return 0;
}
