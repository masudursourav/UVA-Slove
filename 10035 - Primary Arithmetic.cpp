#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b;
  while(cin>>a>>b){
    if(a==0 && b==0){
      break;
    }
    if(b>a){
      swap(a,b);
    }
    int sum=0,r=0,r1=0,r3;
    int count=0;
    while(a>0){
      sum=0;
      r=0;
      r1=0;
      r3=0;
      r=a%10;
      r1=b%10;
      sum=r+r1+r3;
      r3=sum/10;
      if(sum/10>0){
        ++count;
      }
      a=a/10;
      b=b/10;
    }
    if(count==0){
      cout<<"No carry operation."<<"\n";
    }
    else if(count==1){
      cout<<"1 carry operation."<<"\n";
    }
    else{
    cout<<count<<" carry operations."<<"\n";
  }
  }
  return 0;
}
