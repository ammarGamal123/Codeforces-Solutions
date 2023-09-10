#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define no return void (cout << "NO" << endl)
#define yes return void (cout << "YES" << endl)
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
const int N = 200;
int mod = 1000000000;
ll f[N];
void iterative_dp() {
    f[0] = f[1] = 1;
    for (int i = 2 ; i < N ; i++) {
        f[i] = ((f[i - 1] % mod) + (f[i - 2] % mod)) % mod;
    }
}
void burn () {
 
    int n, m;
    cin >> n >> m;
    vector<int>a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    iterative_dp();
    while (m--) {
        int t;
        cin >> t;
        if (t == 1) {
           int x , y;
           cin >> x >> y;
            x--;
            a[x] = y;
        }
        else {
            int l, r;
            cin >> l >> r;
            l-- , r--;
            ll ans = 0 , cnt = 0;
            for (int i = l ; i <= r ; i++) {
                ans +=  ( (f[cnt] % mod) * (a[i] % mod)) % mod;
                ans %= mod;
                cnt++;
            }
            cout << ans << endl;
        }
    }
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
   // cin >> test_cases;
    while (test_cases--) {
        burn();
        // solve ();
    }
    return 0;
}