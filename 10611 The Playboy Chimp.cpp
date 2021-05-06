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
       ll n;
       cin>>n;
       ll a[n];for(int i=0;i<n;i++) cin>>a[i];
       ll q;
       cin>>q;
       ll b[q];for(int i=0;i<q;i++) cin>>b[i];
       for(int i=0;i<q;i++){
         ll mx=upper_bound(a,a+n,b[i])-a;
         ll mn=lower_bound(a,a+n,b[i])-a-1;
         if(mx>=0 && mx<n && mn>=0 && mn<n) cout<<a[mn]<<" "<<a[mx]<<"\n";
         else if(mx>=0 && mx<n && mn<0) cout<<"X"<<" "<<a[mx]<<"\n";
         else if(mn>=0 && mn<n && mx>=n)cout<<a[mn]<<" "<<"X"<<"\n";
         else cout<<"X"<<" "<<"X"<<"\n";
       }



      return 0;
}
