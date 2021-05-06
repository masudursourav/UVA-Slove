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
    while(t--){
      int n;
      cin>>n;
      bool a[n+1]={false};
      int p;
      cin>>p;
      while(p--){
        int para;
        cin>>para;
        for(int i=para;i<=n;i+=para){
          a[i]=true;
        }
      }
      int c=0;
      for(int i=1;i<=n;i++){
        if(i%7!=6 && i%7!=0){
          if(a[i]==true){
            ++c;
          }
        }
      }
      cout<<c<<"\n";
    }

    return 0;
}
