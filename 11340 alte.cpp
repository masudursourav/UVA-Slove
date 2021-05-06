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
    while(t--){
    int a[100000];
    char cha[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>cha[i]>>a[i];
    }
    double sum=0;
    string s;
    int tt;
    cin>>tt;
    getline(cin,s);
    while(tt--){
      getline(cin,s);
      for(int i=0;i<n;i++){
      for(int j=0;j<s.size();j++){
        if(s[j]==cha[i]){
          sum=sum+a[i];
        }
      }
    }
  }
    printf("%.2lf$\n",(double)(sum/100.0));
    }
    return 0;
}
