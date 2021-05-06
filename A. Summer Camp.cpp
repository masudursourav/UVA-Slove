#include <bits/stdc++.h>
using namespace std;
int a[10000];
void num(){
  int j=1;
  for(int i=1;i<=1000;i++){
    if(i<=9){
      a[j]=i;
      ++j;
    }
    else{
      int temp=i;
      if(temp%10==0){
      while(temp>0){
        a[j]=temp/10;
        temp=temp/10;
        ++j;
      }
    }
    else{
      while(temp>10){
        a[j]=temp%10;
        temp=temp/10;
        ++j;
      }
    }
    }
  }
}
int main(){
  num();
  int n;
  cin>>n;
  cout<<a[n]<<"\n";
}
