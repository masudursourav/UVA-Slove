#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        list<char>l;
        list<char>::iterator it=l.begin();
        int k=s.size();
        for(int i=0;i<k;i++){
            if(s[i]=='['){
                it=l.begin();
            }
            else if(s[i]==']'){
                it=l.end();
            }
            else{
                l.insert(it,s[i]);
            }
        }
        for(it=l.begin();it!=l.end();it++){
            cout<<*it;
        }
        cout<<"\n";
    }
    return 0;
}
