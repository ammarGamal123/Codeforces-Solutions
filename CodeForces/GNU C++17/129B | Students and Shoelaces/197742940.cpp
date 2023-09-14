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
    int n , m;
    cin >> n >> m;
    int ans {};
    vector < set <int> > nums(n + 1);
    while (m--){
        int from , to;
        cin >> from >> to;
        nums[from].insert(to);
        nums[to].insert(from);
    }
    bool valid = true;
    while (valid){
        vector <int> del;
        valid = false;
        for (int i = 1; i <= n; i++){
            if (nums[i].size() == 1 )
                del.emplace_back(i);
        }
        for (int i = 0; i < del.size(); i++){
            auto it = nums[del[i]].begin();
            nums[del[i]].clear();
            nums[*it].erase(del[i]);
        }
        if (del.size())
            ans ++ , valid = true;
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