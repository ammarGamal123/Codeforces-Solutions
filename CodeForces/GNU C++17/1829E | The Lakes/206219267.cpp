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
 
int cnt {};
void check (int i , int j , vector <vector<bool>> &vis , vector <vector <int>> &a , int n , int m){
 
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || !a[i][j])
        return;
 
    vis[i][j] = true;
    cnt += a[i][j];
    check (i + 1 , j , vis , a , n , m);
    check (i - 1 , j , vis , a , n , m);
    check (i  , j + 1 , vis , a , n , m);
    check (i , j - 1 , vis , a , n , m);
}
 
void solve (){
    int n , m;
    cin >> n >> m;
    vector <vector <int>> a (n , vector <int> (m));
    vector <vector <bool>> vis (n , vector<bool> (m));
 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int Max = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!vis[i][j] && a[i][j]){
                check (i , j , vis , a , n , m);
                Max = max (cnt , Max);
                cnt = 0;
            }
        }
    }
    cout << Max << endl;
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