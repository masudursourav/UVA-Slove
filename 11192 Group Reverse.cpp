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
    int n;
    while(cin>>n){
      if(n==0){
        break;
      }
      string s,ans;
      cin>>s;
      int l=(s.size())/n;
      for(int i=0;i<s.size();i+=l){
        string k=s.substr(i,l);
        reverse(k.begin(),k.end());
        ans+=k;
      }
      cout<<ans<<"\n";
    }

    return 0;
}
