#include <bits/stdc++.h>
using namespace std;
string s[17]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
vector<string>v;
int main()
{
  int n;
  cin>>n;
  string in;
  for(int i=0;i<n;i++){
    cin>>in;
    v.push_back(in);
  }
  int i=0,j=0,flag=0;
  while(1) {
      cout<<v[i]<<": "<<s[j]<<"\n";
      if(i==n-1)
          flag = 1;
      if(j==15 && flag)
          break;
      i++, j++;
      if(i >= n)  i = 0;
      if(j >= 16) j = 0;
  }
  return 0;
}
