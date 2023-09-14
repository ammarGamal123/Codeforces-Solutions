#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
int xpos[1009] , ypos[1009] , r[1009];
int n;
int dist (int x1 , int y1 , int x2 , int y2){
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}
bool check (int x , int y){
    for (int i = 0; i < n; i++){
        if (dist(x , y , xpos[i] , ypos[i]) <= r[i] * r[i])
            return 0;
    }
    return true;
}
void solve () {
    int xa , ya , xb , yb;
    cin >> xa >> ya >> xb >> yb;
 
    cin >> n;
 
    for (int i = 0; i < n; i++){
        cin >> xpos[i] >> ypos[i] >> r[i];
    }
 
    int ans {};
 
    for (int i = min (xa , xb); i <= max(xa , xb); i++){
        ans += check (i , ya) + check (i , yb);
    }
 
    for (int i = min (ya , yb) + 1; i < max (ya , yb); i++){
        ans += check (xa , i) + check (xb , i);
    }
 
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
   //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}