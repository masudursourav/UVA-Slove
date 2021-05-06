//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r;
    while(cin>>n>>r){
      if(n==0 && r==0){
        break;
      }
      ll com=1;
      for(int i=0;i<min(r,(n-r));i++){
        com=com*(n-i)/(i+1);
      }
      cout<<com<<"\n";
    }

    return 0;
}
