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
    int a[300]={0};
    int n;
    cin>>n;
    while(n--){
      char inc;
      int in;
      cin>>inc>>in;
      int ss=257-inc;
      a[ss]=in;
    }
    double sum=0;
    string s;
    int tt;
    cin>>tt;
    getline(cin,s);
    while(tt--){
      getline(cin,s);
      for(int i=0;i<s.size();i++){
        int ss=257-s[i];
        sum=sum+a[ss];
      }
    }
    printf("%.2lf$\n",(double)(sum/100.0));
    }
    return 0;
}
