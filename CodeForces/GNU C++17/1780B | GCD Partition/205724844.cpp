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
 
 
 
void solve () {
 
 
 
    int n;
    cin >> n;
 
    vector <int> a (n);
 
    for (auto &i : a)
        cin >> i;
 
    vector <int> prefix (n + 1);
 
    for (int i = 1; i <= n;i++){
        prefix[i] += a[i - 1] + prefix[i - 1];
    }
 
    int Max_GCD = 0;
    int sum = prefix[n];
    for (int i = 1;i <= n - 1;i++){
        Max_GCD = max (Max_GCD ,
                       __gcd(sum - prefix[i] , prefix[i]));
    }
    cout << Max_GCD << endl;
}
 
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}