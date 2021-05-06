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
      int a[n][n];
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>a[i][j];
        }
      }
      int er=0,ec=0,r,c;
      for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
          sum+=a[i][j];
        }
        if(sum%2!=0){
          r=i+1;
          ++er;
        }
      }
      for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
          sum+=a[j][i];
        }
        if(sum%2!=0){
          c=i+1;
          ++ec;
        }
      }
    if(er==0&&ec==0){
      cout<<"OK"<<"\n";
    }
    else if(er==1 && ec==1){
      cout<<"Change bit ("<<r<<","<<c<<")\n";
    }
    else{
      cout<<"Corrupt"<<"\n";
    }
}
    return 0;
}
