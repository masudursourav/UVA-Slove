//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll p,h,o;
       while(cin>>p>>h>>o){
        if(o-p<h){
          cout<<"Hunters win!"<<"\n";
        }
        else{
          cout<<"Props win!"<<"\n";
        }
       }

      return 0;
}
