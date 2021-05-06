#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
      int count=0,c=0;
      for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')){
          c=1;
        }
        else{
          count+=c;
          c=0;
        }
      }
      cout<<count<<"\n";
    }
    return 0;
}
