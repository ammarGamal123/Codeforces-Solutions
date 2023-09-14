#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long
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
    string s;
    cin >> s;
    bool a[n + 1];
    for (int i = 1;i <= n;i ++){
        a[i] = (s[i - 1] == '1');
    }
    int cost [n + 1];
    unsigned long long ans {};
    for (int i = n;i >= 1;i --){
        for (int j = i; j <= n; j += i){
            if (a[j]) break;
            cost[j] = i;
        }
    }
    for (int i = 1;i <= n; i++){
        if (!a[i])
            ans += cost[i];
    }
    cout << ans << endl;
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