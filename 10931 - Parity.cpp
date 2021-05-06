#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  vector<char>v;
  char s;
  while(1){
    cin>>n;
    if(n==0){
      break;
    }
    int i=0;
    int c=0;
    while(n>0){
      int r=n%2;
      s=(r+'0');
      v.push_back(s);
      ++i;
      if(r==1){
        ++c;
      }
      n=n/2;
    }
    cout<<"The parity of ";
    int l=v.size();
    for(int i=l-1;i>=0;i--){
      cout<<v[i];
    }
    cout<<" is ";
    cout<<c<<" (mod 2)."<<"\n";
    v.clear();
  }
  return 0;
}
