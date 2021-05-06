//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
ll s[50001];
void store(){
  long double sum=0;
  for(int i=1;i<50001;i++){
    sum+=pow(i,3);
    s[i]=sum;
  }
}

int main()
{
  store();
    int t;
    while(cin>>t){
      cout<<s[t]<<"\n";
    }

    return 0;
}
