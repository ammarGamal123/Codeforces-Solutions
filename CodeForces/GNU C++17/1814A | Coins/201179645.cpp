#include <bits/stdc++.h>
 
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
 
void solve () {
    int n , k;
    cin >> n >> k;
    if (n % 2 == 0 || (n - k) % 2 == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
 
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}