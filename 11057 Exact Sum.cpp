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
     ll n;
     while(cin>>n){
       ll a[n];
       for(int i=0;i<n;i++){
         cin>>a[i];
       }
       sort(a,a+n);
       ll p;
       cin>>p;
       ll sum=0;
       ll x,y;
       for(int i=0;i<n-1;i++){
         sum=p-a[i];
         if(binary_search(a+i+1,a+n,sum)){
           x=a[i];
           y=sum;
         }
       }
       cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<"."<<"\n";
       cout<<"\n";
     }

    return 0;
}
