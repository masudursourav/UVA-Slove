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
    ll t;
    cin>>t;
    int ca=0;
    while(t--){
      ll x,y;
      cin>>x>>y;
      ll c=0;
      cout<<"Case "<<++ca<<": ";
      ll ans=((x-1)/3)*2;
      ll ans1 =(y/3)*2;
      if((x-1)%3==2){
        ++ans;
      }
      if(y%3==2){
        ++ans1;
      }
      c=ans1-ans;
      cout<<c<<"\n";
    }
    return 0;
}
