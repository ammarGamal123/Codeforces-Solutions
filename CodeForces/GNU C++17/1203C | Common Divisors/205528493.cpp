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
const int NN = 7000000 , OO = 0x3F3F3F3F;
 
int get_divisors(int n) {
 
    vector <int> divisors;
 
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.emplace_back(i);
            if (i != n / i) {
                divisors.emplace_back(n / i);
            }
        }
    }
    return divisors.size();
}
 
int solve () {
 
    int n;
    cin >> n;
    vector <int> a(n);
 
    for (auto &i : a)
        cin >> i;
 
    sort (all(a));
    int GCD = a[0];
 
    for (int i = 0;i < n; i++){
        GCD = __gcd (a[i] , GCD);
    }
    int ans = get_divisors(GCD);
    cout << ans << endl;
 
 
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}