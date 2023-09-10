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
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr = 27;
const int NN1 = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
bool comp (pair <int,int> p1 , pair <int,int> p2){
    if (p1.first == p2.first) return p1.second < p2.second;
    return p1.first < p2.first;
}
void solve () {
    int n;
    cin >> n;
    vector<priority_queue<int, vector<int>, greater<>>> pq(n);
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> a(m);
        for (int j = 0; j < m; j++) {
            cin >> a[j];
            pq[i].push(a[j]);
        }
    }
    if (n == 1) {
        return void(cout << pq.front().top() << endl);
    }
    int sum = 0;
    vector<pair < int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        a[i].first = pq[i].top();
        pq[i].pop();
        a[i].second = pq[i].top();
        pq[i].pop();
    }
    sort(all(a) , comp);
    int Min = INT_MAX;
    for (int i = 0; i < n; i++){
        sum += a[i].second;
        Min = min (a[i].first , Min);
    }
    int ans = 0;
    for (int i = 0;i < n;i++){
        ans = max (ans , sum - a[i].second + Min);
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}