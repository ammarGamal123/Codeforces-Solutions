#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
 
 
void solve () {
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << -1 << endl;
        return;
    }
    vector <int> ans;
    while (n > 1 ){
        int x1 = (n + 1) / 2 , x2 = (n - 1) / 2;
        if (x2 & 1) n = x2;
        else n = x1;
        ans.emplace_back(n == x2 ? 2 : 1);
    }
    reverse(all(ans));
    cout << ans.size() << endl;
    for (auto i : ans) cout << i << " ";
    cout << endl;
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