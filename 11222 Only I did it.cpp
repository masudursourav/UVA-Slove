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
    int t;
    cin>>t;
    int c=0;
    while(t--){
      int a[3][1005]={0};
      for(int i=0;i<3;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
          int in;
          cin>>in;
          a[i][in]=1;
        }
      }
      int ans[3][10001]={0};
      int count[3]={0};
      for(int i=0;i<=1000;i++){
        if(a[0][i]&&!a[1][i]&&!a[2][i]){
          ++count[0];
          ans[0][i]=1;
        }
        if(a[1][i]&&!a[0][i] &&!a[2][i]){
          ++count[1];
          ans[1][i]=1;
        }
        if(a[2][i]&&!a[0][i]&&!a[1][i]){
          ++count[2];
          ans[2][i]=1;
        }
      }
      cout<<"Case #"<<++c<<":"<<"\n";
      int mx=0;
      for(int i=0;i<3;i++){
        if(count[i]>mx){
          mx=count[i];
        }
      }
      for(int i=0;i<3;i++){
        if(count[i]==mx){
          cout<<i+1<<" "<<mx;
          for(int j=0;j<=1000;j++){
            if(ans[i][j]){
              cout<<" "<<j;
            }
          }
          cout<<"\n";
        }
      }
    }

    return 0;
}
