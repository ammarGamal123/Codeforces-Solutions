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
const int N = 1001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve () {
    int n , k;
    cin >> n >> k;
    vector <int> a (n);
    map <int, vector <int> > mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        int x = a[i] , cnt {};
        mp[x].emplace_back(0);
        while (x){
            cnt ++;
            x /= 2;
            mp[x].emplace_back(cnt);
        }
    }
    int op{} , mn_op {INT_MAX};
    for (auto i : mp){
        if (i.second.size() >= k){
            int cur {};
            vector <int> v = i.second;
            sort (all(v));
            for (int j = 0; j < k; j++){
                cur += v[j];
            }
            mn_op = min (mn_op , cur);
        }
    }
    cout << mn_op << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
   // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}