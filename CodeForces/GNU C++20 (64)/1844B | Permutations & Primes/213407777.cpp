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
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
// Delta X array is the step of horizontal step
int dx[]={0,0,1,-1,-1,-1,1,1};
// Delta Y array is the step of vertical step
int dy[]={1,-1,0,0,1,-1,1,-1};
 
void burn () {
    int n; cin >> n;
    if (n == 1) return void (cout << 1 << endl);
    if (n == 2) return void (cout << "2 1" << endl);
    vector <int> ans (n);
    ans[0] = 2;
    ans[n / 2] = 1;
    ans[n - 1] = 3;
    int cur = 4;
    for (int i = 0; i < n; i++){
        if (!ans[i]) ans[i] = cur ++;
    }
    for (auto i : ans) cout << i << " ";
    cout << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1, Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    cin >> test_cases;
    while (test_cases--) {
        burn();
        // solve ();
    }
    return 0;
}