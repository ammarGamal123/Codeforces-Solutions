#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 int Ax, Ay, Bx, By, Cx, Cy;
 cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
 int AB = abs(Ax - Bx) + abs(Ay - By);
 int AC = abs(Ax - Cx) + abs(Ay - Cy);
 int best = 0;
 for(int x : {Ax, Bx, Cx}){
  for(int y : {Ay, By, Cy}){
   int d1 = abs(x - Ax) + abs(x - Bx) + abs(y - Ay) + abs(y - By);
   int d2 = abs(x - Ax) + abs(x - Cx) + abs(y - Ay) + abs(y - Cy);
   if(d1 == AB && d2 == AC){
    best = max(best, abs(x - Ax) + abs(y - Ay));
   }
  }
 }
 cout << (best+1) << '\n';
}
 
int main(){
 ios_base::sync_with_stdio(false), cin.tie(nullptr);
 int T;
 cin >> T;
 while(T--) solve();
}