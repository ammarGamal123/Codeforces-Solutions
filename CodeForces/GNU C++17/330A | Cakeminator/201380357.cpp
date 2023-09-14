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
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
bool row[15];
bool colum[15];
bool vis[15][15];
void solve () {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int ans{};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 'S') {
                row[i] = 1;
                colum[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {// 0 1 2
        if (row[i] == 0) {
            for (int j = 0; j < m; ++j) {
                if (!vis[i][j]) {
                    vis[i][j] = 1;
                    ans++;
                }
            }
        }
    }
    //  cout<<ans<<endl;
    for (int i = 0; i < m; ++i) {
        if (colum[i] == 0) {
            for (int j = 0; j < n; ++j) {
                if (!vis[j][i]) {
                    ans++;
                    vis[j][i] = 1;
                }
            }
        }
    }
    cout << ans;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
 
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}