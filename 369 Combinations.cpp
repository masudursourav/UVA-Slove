//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
ll l[1001][1001]={0};
void ncr(){
  l[0][0]=1;
  for(int i=1;i<1001;i++){
    l[i][0]=1;
    for(int j=1;j<i+1;j++){
      l[i][j]=(l[i-1][j-1]+l[i-1][j]);
    }
  }
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ncr();
     ll n,m;
     while(cin>>n>>m){
       if(n==0 && m==0){
         break;
       }
       else{
         cout<<n<<" things taken "<<m<<" at a time is "<<l[n][m]<<" exactly."<<"\n";
       }
     }


    return 0;
}
