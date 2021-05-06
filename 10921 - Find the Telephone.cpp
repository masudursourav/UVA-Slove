#include <bits/stdc++.h>
using namespace std;
int main()
{
  char c[27]="22233344455566677778889999";
  char in[35];
  while((scanf("%s",in))!=EOF){
    int l=strlen(in);
    for(int i=0;i<l;i++){
      if(in[i]>='A' && in[i]<='Z'){
        cout<<c[in[i]-'A'];
      }
      else{
        cout<<in[i];
      }
    }
    cout<<"\n";
  }
  return 0;
}
