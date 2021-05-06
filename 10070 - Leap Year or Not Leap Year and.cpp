#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int y;
  while(cin>>y){
    int c=0,c1=0,c2=0;
    if((y%4==0 && y%100!=0)||(y%400==0)){
      c=1;
      if(y%55==0){
        c1=1;
      }
    }
    if(y%15==0){
      c2=1;
    }
    if(c==1){
      cout<<"This is leap year."<<"\n";
    }
    if(c2==1){
      cout<<"This is huluculu festival year."<<"\n";
    }
    if(c1==1){
      cout<<"This is bulukulu festival year."<<"\n";
    }
    if(c==0 && c2==0){
      cout<<"This is an ordinary year."<<"\n";
    }
  }
  return 0;
}
