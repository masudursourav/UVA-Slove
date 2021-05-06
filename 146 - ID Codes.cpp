#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    while(cin>>s){
        if(s=="#"){
            break;
        }
        if(!next_permutation(s.begin(),s.end())){
            cout<<"No Successor"<<"\n";
            continue;
        }
            cout<<s<<"\n";
    }
  return 0;
}
