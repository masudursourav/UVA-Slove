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
    string s;
    while(cin>>s){
      string ans;
      bool c[6]={false};
      for(int i=0;i<s.size();i++){
        if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')&&c[0]==false){
            ans+='1';
            c[0]=true;
            c[1]=c[2]=c[3]=c[4]=c[5]=false;
        }
        else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K' || s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z') && c[1]==false) {
            ans+='2';
            c[1]=true;
            c[0]=c[2]=c[3]=c[4]=c[5]=false;
        }
        else if((s[i]=='D'||s[i]=='T') && c[2]==false){
            ans+='3';
            c[2]=true;
            c[1]=c[0]=c[3]=c[4]=c[5]=false;
        }
        else if(s[i]=='L' && c[3]==false){
            ans+='4';
            c[3]=true;
            c[1]=c[0]=c[2]=c[4]=c[5]=false;
        }
        else if((s[i]=='M'||s[i]=='N') && c[4]==false){
            ans+='5';
            c[4]=true;
            c[1]=c[0]=c[2]=c[3]=c[5]=false;
        }
        else if(s[i]=='R' && c[5]==false){
            ans+='6';
            c[5]=true;
            c[1]=c[0]=c[2]=c[3]=c[4]=false;
        }
        else if( s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y'){
          c[0]=c[1]=c[2]=c[3]=c[4]=c[5]=false;
        }
      }
      cout<<ans<<"\n";
    }


    return 0;
}
