#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
int comp[NN];
void modified_sieve(){
    iota (comp , comp+NN, 0);
    comp[0] = comp[1] = -1;
    for (int i = 2; i < NN / i; i++){
        if (comp[i] == i){
            for (int j = i * i; j < NN; j+=i) {
                if (comp[j] == j)
                    comp[j] = i;
            }}}
}
 
 
 
void solve (){
 
    int n;
    cin >>n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        while (x > 1){
            int cur = comp[x];
            int cnt = 0;
            while (x % cur == 0){
                x /= cur;
                cnt ++;
            }
            mp[cur] += cnt;
        }
    }
    int ans = 0, cnt = 0;
    for(auto f : mp){
        if(f.second & 1)
            cnt++;
        ans += f.second / 2;
    }
    ans += cnt / 3;
    cout << ans << '\n';
}
 
 
int32_t main() {
    NeedForSpeed
    modified_sieve();
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}