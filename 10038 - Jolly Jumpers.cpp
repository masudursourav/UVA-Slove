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
    int n,k;
    while(cin>>n){
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      bool flag=true;
      int k=0;
      int b[n];
      for(int i=1;i<n;i++){
        b[k]=abs(a[i]-a[i-1]);
        ++k;
      }
      sort(b,b+k);
      for(int i=0;i<k;i++){
        if(b[i]!=i+1){
          flag=false;
          break;
        }
      }
      if(flag){
        cout<<"Jolly"<<"\n";
      }
      else{
        cout<<"Not jolly"<<"\n";
      }
      }

    return 0;
}
