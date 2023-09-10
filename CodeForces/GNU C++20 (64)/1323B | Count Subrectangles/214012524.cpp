#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define no return void (cout << "NO" << endl)
#define yes return void (cout << "YES" << endl)
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr = 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
vector <int> a , b;
int calc (int rows , int cols){
    int cntR = a.end() - lower_bound(all(a) , rows);
    int cntC = b.end() - lower_bound(all(b) , cols);
    return 1LL * cntR * cntC;
}
void burn () {
    int n , m , k; cin >> n >> m >> k;
    a = vector <int> (n);
    b = vector <int> (m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (int i = 1; i < n; i++)
        if (a[i])
            a[i] += a[i - 1];
    for (int i = 1; i < m; i++)
        if (b[i])
            b[i] += b[i - 1];
 
    sort (all(a)) , sort (all(b));
 
    int ans = 0;
 
    for (int i = 1;i * i <= k; i++){
        if (k % i == 0){
            ans += calc (i , k / i);
            if (i != k / i){
                ans += calc (k / i , i);
            }
        }
    }
    cout << ans << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        burn();
     // solve ();
    }
    return 0;
}