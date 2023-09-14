#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int long long
#define lll __int128
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
void solve () {
    int n;
    cin >> n;
    vector < int > a(n + 1);
    for (int i = 1;i <= n;i++ ) cin >> a[i];
    vector < pair < int , int  > > need;
    for (int i = 1;i <= n;i ++){
        need.emplace_back(a[i] , i);
    }
    sort (all(need));
    cout << n - 1 << endl;
    for (int i = 1; i < n; i++){
        int x = need[i].first , idx = need[i].second;
        int y = need[i - 1].first;
        int a1 = (1ll * x + y - 1) / y * y;
        cout << idx << " " << a1 - x << endl;
        need[i].first = a1;
    }
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}