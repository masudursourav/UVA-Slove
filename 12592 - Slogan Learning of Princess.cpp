#include <bits/stdc++.h>
#define max 10000
using namespace std;
string f,s;
map<string,string>m;
int main() {
  int n;
	scanf("%d ", &n);
	while (n--) {
		getline(cin,f); getline(cin,s);
		m[f] = s;
	}
	scanf("%d ", &n);
	while (n--) {
		getline(cin,f);
		cout << m[f]<<"\n";
	}
	return 0;
}
