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
    int t;
    cin>>t;
    int i=0;
    while(t--){
      ll n,k,p;
      cin>>n>>k>>p;
      cout<<"Case "<<++i<<": ";
      if((k+p)%n==0){
        cout<<n<<"\n";
      }
      else{
        cout<<(k+p)%n<<"\n";
      }
    }

    return 0;
}
