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

       while(1){
         ll n,m,c;
         cin>>n>>m>>c;
         if(n==0 && m==0 && c==0){
           break;
         }
         ll ans;
         if(c){
           ans=((n-7)*(m-7)+1)/2;
         }
         else{
           ans=((n-7)*(m-7))/2;
         }
         cout<<ans<<"\n";
       }

      return 0;
}
