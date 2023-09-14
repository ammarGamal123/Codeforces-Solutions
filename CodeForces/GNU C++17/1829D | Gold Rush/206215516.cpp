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
 
int rec (int n ,int m){
    if (n < m) return false;
    if ( m == n) return true;
    if (n % 3 != 0) return false;
 
    bool check = false;
    n /= 3;
    check |= rec (n , m);
    check |= rec ((n * 2) , m);
    return check;
}
void solve (){
 
    int n , m;
    cin >> n >> m;
 
    if ( rec (n , m)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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