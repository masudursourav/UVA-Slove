#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d,l;
  while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)){
    if(a==0 && b==0 && c==0 && d==0 && l==0){
      break;
    }
    long long int sum=0;
    int count=0;
    for(int i=0;i<=l;i++){
      sum=0;
      sum=a*(i*i)+b*i+c;
      if(sum%d==0){
        ++count;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
