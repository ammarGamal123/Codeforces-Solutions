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
 
vector <int> graph[101][101];
set <int> color;
bool vis[101];
void dfs (int c , int u , int v , int &cnt ){
    vis[u] = true;
    if (u == v){
        cnt ++;
        return;
    }
    for (auto &i : graph[c][u]){
        if (!vis[i]) dfs(c , i , v , cnt);
    }
}
void solve (){
    int n , m;
    cin >> n >> m;
    while (m--){
        int a , b , c; cin >> a >> b >> c;
        color.insert (c);
        graph[c][a].emplace_back(b);
        graph[c][b].emplace_back(a);
    }
    int q; cin >> q;
    while (q--){
        int u , v; cin >> u >> v;
        int cnt {};
        for (auto &i : color) {
            memset(vis, 0, sizeof vis);
            dfs(i, u, v,cnt);
        }
        cout << cnt << endl;
    }
 
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