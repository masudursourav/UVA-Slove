#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<string>v;
  string s;
  while(getline(cin,s)){
    stringstream ss(s);
    string w;
    while(ss>>w){
      reverse(w.begin(),w.end());
      v.push_back(w);
    }
    for(int i=0;i<v.size();i++){
      cout<<v[i];
      if(i!=v.size()-1){
        cout<<" ";
      }
    }
    cout<<"\n";
    v.clear();
  }
}
