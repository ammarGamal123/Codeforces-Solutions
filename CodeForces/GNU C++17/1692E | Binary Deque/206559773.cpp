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
const int N1 = 2e5 + 7, MOD = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
 
int query(int l , int r , vector <int> &pre){
    return pre[r] - (l ? pre[l - 1] : 0);
}
void solve () {
 
    int n , k;
    cin >> n >> k;
 
    vector <int> a (n) , pre (n);
 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        pre[i] = a[i];
        if (i) pre[i] += pre[i - 1];
    }
 
 
    int ans = INT_MAX;
 
    for (int i = 0; i < n;i++){
        int l = i , r = n - 1 , pos = -1;
        while (l <= r){
            const int mid = (l + r ) / 2;
            if (query(i , mid , pre) <= k){
                pos = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if (pos == -1 || query (i , pos , pre) != k){
            continue;
        }
        ans = min (ans , n - (pos - i + 1));
    }
    cout << (ans == INT_MAX ? -1 : ans ) << endl;
}
int32_t main() {
    //NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}