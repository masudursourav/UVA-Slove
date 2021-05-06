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
      ll n,r,ca=0;
      while(cin>>n>>r){
        if(n==0 && r==0){
          break;
        }
        ll ans=n-r;
        if(r>n){
          ans=0;
        }
        else{
          if(ans%r==0){
            ans/=r;
          }
          else{
            ans=(ll)(ans/r);
            ++ans;
          }
        }
        cout<<"Case "<<++ca<<": ";
        if(ans>26){
          cout<<"impossible"<<"\n";
        }
        else{
          cout<<ans<<"\n";
        }
      }

      return 0;
}
