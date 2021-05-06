#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum,ava,i=0;
    while(cin>>n){
        if(n==0){
            break;
        }
        int a[n];
        sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ava=(int)(sum/n);
        sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(ava-a[i]);
        }
        sum=sum/2;
        cout<<"Set #"<<++i<<"\nThe minimum number of moves is "<<sum<<".\n\n";
    }
    return 0;
}
