#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define output_vector(a) for (auto i : a) cout << i << " ";
#define int    long long
#define no return void (cout << "NO" << endl)
#define yes return void (cout << "YES" << endl)
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1000000000LL + 100;
const long double PI = acos(-1) , EPS = 0.000000001;
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr = 27;
const int NN1 = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
const int N2 = 1e5+5;
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {
 
        if(power & 1 ) { // Can also use (power & 1) to make code even faster
            result = (result*base) % Mod;
        }
        base = (base * base) % Mod;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
vector <int> graph [55];
bool vis[55];
int cnt = 1;
 
void dfs (int node){
    vis[node] = true;
    for (auto x : graph[node]){
        if (!vis[x])
            dfs(x) , cnt <<= 1;
    }
}
 
void solve (){
    int n , m; cin >> n >> m;
    int x , y;
    for (int i = 0;i < m; i++){
        cin >> x >> y;
        graph[x].emplace_back(y);
        graph[y].emplace_back(x);
    }
    for (int i = 1;i <= n; i++){
        dfs(i);
    }
 
    cout << cnt << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
   //  cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}