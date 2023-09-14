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
int lcm(int a,int b) {
    int g = __gcd(a, b);
    return (a * b / g);
}
void solve () {
    int n;
    cin >> n;
    vector<int> a(n + 2 , 1), b(n + 2 , 1);
    for (int i = 1;i <= n;i ++){
        cin >> a[i];
    }
    for (int i = 1;i <= n + 1;i++){
            b[i] = lcm (a[i - 1] , a[i]);
    }
    bool ok = true;
    
    for (int i = 1; i <= n; i++){
        if (__gcd(b[i] , b[i + 1]) != a[i])
            ok = false;
    }
    cout << (ok ? "YES" : "NO") << endl;
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