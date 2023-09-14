#include <bits/stdc++.h>
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
 
void solve1 (){
    int n , q;
    cin >> n >> q;
    vector <int> a(n);
    for (int i = 0;i < n;i++)
        cin >> a[i];
    vector <int> prefix(n + 2);
    for (int i = 1; i <= n;i++){
        prefix[i] += a[i - 1] + prefix[i - 1];
    }
    int sum = prefix[n];
    vector <int> prefix_temp = prefix;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        sum = prefix[n];
        int tmp = prefix[r] - prefix[l - 1];
        sum -= tmp;
        sum += (r - l + 1) * k;
        if (sum & 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
 
        }
    }
 
}
void solve (){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort (all(a));
    int Min = *min_element(all(a));
    if (Min != 1){
        cout << "NO" << endl;
        return;
    }
    int cur = a[0];
    for (int i = 1;i < n; i++){
        if (cur < a[i]){
            cout << "NO" << endl;
            return;
        }
        else cur += a[i];
    }
    cout << "YES" <<  endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}