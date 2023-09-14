#include <bits/stdc++.h>
#include <tr1/unordered_map>
 
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
 
void solve () {
    double vp , vd , t , f , c , x1 , t1 , ans {};
    cin >> vp >> vd >> t >> f >> c;
    if (vp >= vd){
        cout << 0 << endl;
        return;
    }
    double princess = vp * t;
    while (princess < c){
        x1 = princess / (vd - vp);
        princess += (x1 * vp);
        if (princess >= c){
            break;
        }
        t1 = f + (princess / vd);
        princess += (t1 * vp);
        ans ++;
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