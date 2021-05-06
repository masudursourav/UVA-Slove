#include <bits/stdc++.h>
using namespace std;
int main(){
  char in[100];
  char a='%';
  long long int sum1,sum2;
  double fsum;
  while((scanf("%s",in))!=EOF){
    sum1=0,sum2=0;
    fsum=0.0;
    int l=strlen(in);
    for(int i=0;i<l;i++){
      if(in[i]>='a' && in[i]<='z'){
        sum1+=in[i]-'a'+1;
      }
      else if(in[i]>='A' && in[i]<='Z'){
        sum1+=in[i]-'A'+1;
      }
    }
    scanf("%s",in);
    int l1=strlen(in);
    for(int i=0;i<l1;i++){
      if(in[i]>='a' && in[i]<='z'){
        sum2+=in[i]-'a'+1;
      }
      else if(in[i]>='A' && in[i]<='Z'){
        sum2+=in[i]-'A'+1;
      }
    }

   while(sum1>=10){
     int temp=0;
     while(sum1>0){
       temp=sum1%10;
       sum1=sum1/10;
     }
     sum1=temp;
   }
   while(sum2>=10){
     int temp=0;
     while(sum2>0){
       temp=sum2%10;
       sum2=sum2/10;
     }
     sum2=temp;
   }
   cout<<sum1<<" "<<sum2<<"\n";
   double sum1d=0.0,sum2d=0.0;
   sum1d=sum1+0.00;
   sum2d=sum2+0.00;
   cout<<sum1d<<" "<<sum2d<<"\n";
   if(sum1d>sum2d){
     fsum=(double)((sum2d/sum1d)*100);
     printf("%.2lf %c\n",fsum,a);
   }
   else{
     fsum=(double)((sum1d/sum2d)*100);
     printf("%.2lf %c\n",fsum,a);
   }
  }
  return 0;
}
