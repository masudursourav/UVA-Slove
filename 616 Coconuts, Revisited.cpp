//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
    ll n;
    while(cin>>n){
      if(n==-1) break;
      cout<<n<<" coconuts, ";
      bool ans=true;
      ll nk=sqrt(n-1)+1;
      for(ll i=nk;i>=2;i--){
        ll k=0;
        ll temp=n;
          while(temp%i==1){
            ++k;
            temp-=(ll)(temp/i);
            temp-=1;
          }
          if(temp%i==0 && i==k){
            cout<<i<<" people and "<<1<<" monkey\n";
            ans=false;
            break;
          }
        }
      if(ans) cout<<"no solution"<<"\n";
    }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t=1; //cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
