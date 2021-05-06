#include <bits/stdc++.h>
using namespace std;
int mu(long int n){
if(n==1){
  return 1;
}
  int c=0,count=0;
  while(n%2==0){
    n=n/2;
    ++c;
    ++count;
    if(c>1){
      return 0;
    }
  }
  int ch=0;
  for(int i=3;i*i<=n;i+=2){
    ch=0;
    while(n%i==0){
      n=n/i;
      ++ch;
      ++count;
      if(ch>1){
        return 0;
      }
    }
  }
  if (n > 2){
		++count;
  }

    if(count%2==0){
      return 1;
    }
    else{
      return (-1);
    }
}
long int n;
int main()
{
  while(scanf("%ld",&n)){
    if(n==0){
      break;
    }
  long int m=0,r=0;
  for(int i=1;i<=n;i++){
    r=mu(i);
    m=m+r;
}
   printf("%8ld  %6ld  %6ld\n",n,r,m);
}
return 0;
}
