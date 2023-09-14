#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
const int n = 1001;
int a[n][n];
void solve () {
        int n1;
        cin >> n1;
        vector < pair <int,int> > need (n1 + 1);
        for (int i = 1;i <= n1;i++){
            cin >> need[i].first >> need[i].second;
        }
        sort (all(need));
        bool valid = true;
        string ans = "";
        
        int cur_u {} , cur_r {};
        for (int i = 1; i <= n1; i++){
            if (cur_r <= need[i].first) {
                while (cur_r != need[i].first) {
                    ans += 'R';
                    cur_r++;
                }
            }
            else {
                cout << "NO" << endl;
                return;
            }
            if (cur_u <= need[i].second) {
                while (cur_u != need[i].second) {
                    ans += 'U';
                    cur_u++;
                }
            }
            else {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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