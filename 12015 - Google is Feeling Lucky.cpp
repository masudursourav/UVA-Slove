#include <bits/stdc++.h>
using namespace std;
vector<string>v;
int k=0;
int main()
{
  int t;
  int a[100],p[100],c[100];
  cin>>t;
  string s;
  while(t--){
    for(int i=0;i<10;i++){
      cin>>s;
      v.push_back(s);
      cin>>a[i];
      c[i]=a[i];
    }
    sort(a,a+10,greater<int>());
    int h=a[0];
    int j=0;
    for(int i=0;i<10;i++){
      if(c[i]==h){
        p[j]=i;
        ++j;
      }
    }
    cout<<"Case #"<<++k<<":"<<"\n";
    for(int i=0;i<j;i++){
      cout<<v[p[i]]<<"\n";
    }
  }
 return 0;
}
