#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  string s;
  char a[10]={'O','I','Z','E','A','S','G','T','B','P'};
  scanf("%d ",&t);
  while(t--){
    while(getline(cin,s)){
      if(s[0]=='\0'){
        break;
      }
      for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
          cout<<a[s[i]-'0'];
        }
        else
        cout<<s[i];
      }
      cout<<"\n";
    }
    if(t)
    cout<<"\n";
  }
  return 0;
}
