#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
//#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
 
void solve (){
    int n , w;
    cin >> n >> w;
    vector <int> bus(n);
    for (int i = 0;i < n;i++){
        cin >> bus[i];
    }
    vector <int> prefix(n + 1);
    for (int i = 1;i <= n;i++) {
        prefix[i] += bus[i - 1] + prefix[i - 1];
    }
    int mn = 0, mx = INF;
    for (int i = 0; i <= n; i++){
        mn = max(mn, - prefix[i]);
        mx = min(mx, w - prefix[i]);
    }
    int ans = 0;
    cout << max(mx - mn + 1, ans) << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
   // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}