#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, MOD = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
bool flip1 (vector<int>&a, int odd) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] % 2 == 0 && odd > a[i]) {
            return false;
        }
    }
    return true;
}
 
 
void solve () {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int odd = INT_MAX, even = INT_MAX;
    int cnt_even = 0, cnt_odd = 0;
 
 
    for (int i = 0; i < n; i++) {
        if (a[i] & 1) {
            odd = min(odd, a[i]);
            cnt_odd++;
        }
        else {
            even = min(even,a[i]);
            cnt_even++;
        }
    }
    if(cnt_even && !cnt_odd || cnt_odd && !cnt_even) {
        cout << "YES" << endl;
        return;
    }
 
    if (flip1(a , odd)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
 
 
}
int32_t main() {
    //NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}