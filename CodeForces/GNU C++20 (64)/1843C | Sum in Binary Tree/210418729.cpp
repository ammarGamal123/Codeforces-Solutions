#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
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
 
void burn () {
    int n , m;
    cin >> n >> m;
    vector <int> a(n) , pre (n + 10) , suf (n + 10);
    for (auto &i : a){
        cin >> i;
    }
    pre[0] = 0;
    for (int i = 1; i < n; i++){
        pre[i] += pre[i - 1] + (a[i - 1] > a[i] ? a[i - 1] - a[i] : 0);
    }
    suf[n - 1] = 0;
    for (int i = n - 2; i >= 0;i --){
        suf[i] += suf[i + 1] + (a[i] > a[i - 1] ? a[i] - a[i - 1] : 0);
    }
 
    while (m --){
        int l , r;
        cin >> l >> r;
        if (l <= r){
            if (l == 1) cout << pre[r - 1] << endl;
            else cout << pre[r - 1] - pre[l - 1] << endl;
        }
        else {
            --l , --r;
            cout << suf[r] - suf[l] << endl;
        }
    }
}
 
void solve (){
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0) {
        ans += n;
        n >>= 1;
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    cin >> test_cases;
    while (test_cases--) {
 
        solve();
 
    }
    return 0;
}