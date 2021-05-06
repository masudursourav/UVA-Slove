#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int t;
    cin>>t;
    while(t--){
        int a[1000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int c=0;
        for(int i=1;i<n;i++){
            if(a[i-1]==a[i]){
                c=1;
                cout<<"NO"<<"\n";
                break;
            }
        }
        if(c==0){
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
