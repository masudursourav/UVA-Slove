#include<bits/stdc++.h>
using namespace std;
int main() {
 int n, val;
 while (1) {
  scanf("%d", &n);
  if (n == 0)
   break;
  while(1){
     stack<int> A;
   scanf("%d", &val);
   if (val==0) {
    printf("\n");
    break;
   }
   A.push(val);
   for (int i = 1; i <n; i++) {
    scanf("%d", &val);
    A.push(val);
   }
   int i=n;
   while(i>=1){
    if (!A.empty() && A.top() == i) {
     A.pop();
   }
   --i;
 }
   if (A.empty())
    cout<<"Yes"<<"\n";
   else
   cout<<"No"<<"\n";

}
}
}
