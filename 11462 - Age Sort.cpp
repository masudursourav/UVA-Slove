#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int>a;
  long int n;
  while(1){
    cin>>n;
    if(n==0){
      break;
    }
    for(long int i=0;i<n;i++){
      int b;
      cin>>b;
      a.push_back(b);
    }
    sort(a.begin(),a.end());
    for(long int i=0;i<n;i++){
      cout<<a[i];
      if(i!=n-1){
        cout<<" ";
      }
    }
    a.clear();
    cout<<"\n";
  }
  return 0;
}
