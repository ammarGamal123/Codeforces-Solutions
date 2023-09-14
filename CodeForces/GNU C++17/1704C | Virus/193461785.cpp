#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve () {
    int n , m;
    cin >> n >> m;
    vector <int> a(m) , b;
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort (all(a));
    int cnt {} , total {};
    priority_queue <int> pq;
    pq.push(a[0] - 1 + n - a[m - 1]);
    for (int i = 1; i < m; i++){
        pq.push((a[i] - a[i - 1]) - 1);
    }
    while (!pq.empty()){
        int cap = pq.top();
        pq.pop();
        cap -= (cnt << 1);
        if (cap > 0){
            cap-- , total ++ , cnt ++;
        }
        else if (cap <= 0) break;
        if (cap) cnt ++ , cap -- , total += cap;
    }
        cout << n - total << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}