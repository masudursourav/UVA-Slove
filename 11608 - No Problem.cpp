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
    int s;
    int k=0;
    while(cin>>s){
      if(s<0){
        break;
      }
      int a[13],b[13];
      for(int i=0;i<12;i++){
        cin>>a[i];
      }
      for(int i=0;i<12;i++){
        cin>>b[i];
      }
      cout<<"Case "<<++k<<":"<<"\n";
      for(int i=0;i<12;i++){
        if(s-b[i]>=0){
          cout<<"No problem! :D"<<"\n";
          s=s-b[i];
          s=s+a[i];
        }
        else{
          cout<<"No problem. :("<<"\n";
          s=s+a[i];
        }
      }
    }

    return 0;
}
