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
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      sort(a,a+n);
      bool flag=true;
      for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>200){
          flag=false;
          break;
        }
      }
      if(((1422-a[n-1])*2)>200 && flag==true){
        flag=false;
      }
      if(flag){
        cout<<"POSSIBLE"<<"\n";
      }
      else{
        cout<<"IMPOSSIBLE"<<"\n";
      }
    }

    return 0;
}
