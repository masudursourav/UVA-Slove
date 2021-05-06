//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w,h,n;
    while(cin>>w>>h>>n){
      if(w==0 && h==0 && n==0){
        break;
      }
      bool a[w+1][h+1]={false};
      memset(a,false,sizeof(a));
      while(n--){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1>x2){
          swap(x1,x2);
        }
        if(y1>y2){
          swap(y1,y2);
        }
        for(int i=x1;i<=x2;i++){
          for(int j=y1;j<=y2;j++){
            a[i][j]=true;
          }
        }
      }
      int c=0;
      for(int i=1;i<=w;i++){
        for(int j=1;j<=h;j++){
          if(a[i][j]==false){
            ++c;
          }
        }
      }
      if(c==0){
        cout<<"There is no empty spots."<<"\n";
      }
      else if(c==1){
        cout<<"There is one empty spot."<<"\n";
      }
      else{
        cout<<"There are "<<c<<" empty spots."<<"\n";
      }
    }

    return 0;
}
