#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int   long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve () {
    int nodes , edges;
    cin >> nodes >> edges;
    vector <int> g[101];
    vector <int> hold;
    vector <int> cnt (101);
    while (edges--){
        int x , y;
        cin >> x >> y;
        g[x].emplace_back(y);
        g[y].emplace_back(x);
        cnt[x] ++;
        cnt[y] ++;
    }
    int ans {};
    while (true){
        hold.clear();
        for (int i = 1; i <= nodes; i++){
            if (cnt[i] == 1){
                hold.emplace_back(i);
            }
        }
        if (hold.empty()) break;
        ans ++;
        for (int i = 0; i < hold.size(); i++){
            cnt[hold[i]] = 0;
        }
        for (int i = 0; i < hold.size(); i++){
            for (int j = 0; j < g[hold[i]].size(); j++){
                cnt[g[hold[i]][j]]--;
            }
        }
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
  //  freopen("mex.in" , "r" , stdin );
   // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}