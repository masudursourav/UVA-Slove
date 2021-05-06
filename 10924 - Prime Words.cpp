#include <bits/stdc++.h>
using namespace std;
int main()
{
  int s[27]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
  int l[27]={27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
  char in[50];
  long long int sum;
  while((scanf("%s",in))!=EOF){
    sum=0;
    int len=strlen(in);
    for(int i=0;i<len;i++){
      if(in[i]>='a' && in[i]<='z'){
        sum+=s[in[i]-'a'];
      }
      else if(in[i]>='A' && in[i]<='Z'){
        sum+=l[in[i]-'A'];
      }
    }
    int p=0;
    for(int i=2;i<=sqrt(sum);i++){
      if(sum%i==0){
        p=1;
        break;
      }
    }
    if(p){
      cout<<"It is not a prime word."<<"\n";
    }
    else{
      cout<<"It is a prime word."<<"\n";

    }
  }
  return 0;
}
