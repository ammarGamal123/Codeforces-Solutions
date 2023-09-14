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
int tile[2][2];
void solve () {
    int n , m;
    cin >> n >> m;
    bool valid = false , valid_m = false;
    for (int i = 0;i < n;i ++){
        for (int j = 0;j < 2; j++){
            for (int k = 0;k < 2; k++){
                cin >> tile[j][k];
            }
        }
        if (tile[0][1] == tile[1][0])
            valid_m = true;
    }
    if (m % 2 == 0) valid = true;
    if (valid && valid_m) cout << "YES" << endl;
    else cout << "NO" << endl;  
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