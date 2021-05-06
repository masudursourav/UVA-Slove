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

       ll t,ca=0;
       cin>>t;
       while(t--){
         string s;
         vector<char>ans;
         cin>>s;
         char temp;
         for(int i=0;i<s.size();i++){
           if(s[i]>='A' && s[i]<='Z'){
             ans.pb(s[i]);
             temp=s[i];
           }
           else if(s[i]>='0' && s[i]<='9'){
             ll k=0;
             k=s[i]-'0';
             ++i;
             while(s[i]>='0' && s[i]<='9'){
               k*=10+(s[i]-'0');
               ++i;
             }
             --i;
             for(int j=0;j<k-1;j++){
               ans.pb(temp);
             }
           }
         }
         cout<<"Case "<<++ca<<": ";
         for(int i=0;i<ans.size();i++){
           cout<<ans[i];
         }
         cout<<"\n";
       }

      return 0;
}
