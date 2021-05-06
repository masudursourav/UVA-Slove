#include <bits/stdc++.h>
using namespace std;
string s[100000];
int l[100000],h[100000];
int main()
{
  long int t,q,p,d;
  cin>>t;
  while(t--){
    cin>>d;
    for(int i=0;i<d;i++){
      cin>>s[i];
      cin>>l[i];
      cin>>h[i];
    }
    cin>>q;
    for(int k=0;k<q;k++)
    {
      cin>>p;
      int c=0;
      int ind=0;
      for(int i=0;i<d;i++){
        if(p>=l[i] && p<=h[i]){
          ind=i;
          ++c;

        }
      }
      if(c>1 || c==0){
        cout<<"UNDETERMINED"<<"\n";
        continue;
      }
      else if(c==1){
        cout<<s[ind]<<"\n";
        continue;
      }
    }
    if(t!=0)
    cout<<"\n";
  }
  return 0;
}
