#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int a,b,c;
  while(1){
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0){
      break;
    }
    else if((((a*a+b*b)==c*c)||((a*a+c*c)==b*b)||((c*c+b*b)==a*a))&&(a+b>c)&&(a+c>b)&&(b+c)>a)
    {
      cout<<"right"<<"\n";
    }
    else{
      cout<<"wrong"<<"\n";
    }
  }
  return 0;
}
