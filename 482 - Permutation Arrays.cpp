//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
int main()
{
    int t;
    cin>>t;
    string in;
    getchar();
    while(t--){
    getchar();
    string a[100005];
    int indx[100005];
    int i=1,j=1;
    getline(cin,in);
    stringstream ss;
    ss<<in;
    string k;
    while(ss>>k){
      indx[i]=stoi(k);
      ++i;
    }
    ss.clear();
    getline(cin,in);
    ss<<in;
    while(ss>>a[indx[j]]){
      ++j;
    }
    for(int p=1;p<j;p++){
      cout<<a[p]<<"\n";
    }
    if(t){
      cout<<"\n";
    }
  }
    return 0;
}
