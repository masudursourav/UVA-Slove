#include <bits/stdc++.h>
using namespace std;
int main(){
  map<int,int>m;
  vector<int>v;
  int n;
  while((scanf("%d",&n))!=EOF){
    if(m.count(n)==0){
      m[n]=1;
      v.push_back(n);
    }
    else{
      m[n]=m[n]+1;
    }
  }
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "<<m[v[i]]<<"\n";
  }
  return 0;
}
