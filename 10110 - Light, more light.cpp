#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        long long int t=sqrt(n);
        if(t==sqrt((n*1.0))){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }
    }
    return 0;
}
