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
    int tt=0;
    while(t--){
      int n;
      char m,nn;
      cin>>m>>nn;
      cin>>n;
      ll a[n][n];
      bool flag = true;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>a[i][j];
          if(a[i][j]<0){
            flag = false;
          }
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(a[i][j]!=a[(n-1)-i][(n-1)-j]){
            flag = false;
            break;
          }
        }
      }
      cout<<"Test #"<<++tt<<": ";
      if(flag){
        cout<<"Symmetric."<<"\n";
      }
      else{
        cout<<"Non-symmetric."<<"\n";
      }
    }

    return 0;
}
