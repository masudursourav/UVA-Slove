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
    ll t;
    while(cin>>t){
      if(t==0){
        break;
      }
      string s;
      int b[t]={0};
       getchar();
      for(int i=0;i<t;i++){
        getline(cin,s);
        for(int j=0;j<25;j++){
          if(s[j]!='X'){
            ++b[i];
          }
        }
      }
      sort(b,b+t);
      ll mn=b[0];
      for(int i=0;i<t;i++){
        b[i]=b[i]-mn;
      }
      ll sum=0;
      for(int i=0;i<t;i++){
        sum+=b[i];
      }
      cout<<sum<<"\n";
    }

    return 0;
}
