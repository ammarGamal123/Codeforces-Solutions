#include <bits/stdc++.h>
#include <tr1/unordered_map>
 
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
int n , m;
bool valid (int x , int y ){
    return x > 0 && x <= n && y > 0 && y <= m;
}
void solve () {
 
    cin >> n >> m;
    int x , y;
    cin >> x >> y;
    int k , ans = 0;
    cin >> k;
    for (int i = 0;i < k; i ++){
        int a = INT_MAX , b = INT_MAX;
        int dx , dy;
        cin >> dx >> dy;
        if (dx > 0){
            a = (n - x) / abs (dx);
        }
        else if (dx < 0){
            a = (x - 1) / abs (dx);
        }
        if (dy > 0){
            b = (m - y) / abs (dy);
        }
        else if (dy < 0){
            b = (y - 1) / abs (dy);
        }
        int mn = min (a , b);
        ans += mn;
        x += mn * dx;
        y += mn * dy;
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
  //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}