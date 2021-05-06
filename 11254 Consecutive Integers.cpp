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
    ll sum;
    while(cin>>sum){
      ll a,n;
      if(sum==-1) break;
		   for (n=(ll)sqrt(2*sum);n>0;n--) {
			  if ((2*sum+n-n*n)%(2*n)==0) {
				a=(2*sum+n-n*n)/(2*n);
				break;
			}
		}
    cout<<sum<<" = "<<a<<" + ... + "<<(a+n-1)<<"\n";
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
