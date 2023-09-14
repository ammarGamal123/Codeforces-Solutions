#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 7000000 , OO = 0x3F3F3F3F;
 
struct player {
    int t , c;
};
void solve () {
 
    int n , m;
    cin >> n >> m;
 
    vector <player> sport (n , {1001 , 0});
 
    for (int i = 0; i < m; i++){
        int l , r , t , c;
        cin >> l >> r >> t >> c;
        --l , --r;
        for (int j = l; j <= r; j++) {
            if (t < sport[j].t) {
                sport[j].t = t;
                sport[j].c = c;
            }
        }
    }
    int ans {};
 
    for (int i = 0; i < n;i++){
        ans += sport[i].c;
    }
    cout << ans << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}