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
void solve () {
    string s;
    cin >> s;
    int n = s.size();
 
    for (char c = 'a'; c <= 'z'; c++) {
        int most = 0;
        int cur = 0;
        for (auto i: s) {
            if (i == c) {
                cur = 0;
            } else cur++;
 
            most = max(most, cur);
        }
        n = min(most, n);
    }
    
    int ans = 0;
 
    while (n > 0){
        n /= 2;
        ans ++;
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