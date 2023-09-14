#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
 
void solve (){
    int p , q , l , r;
    cin >> p >> q >> l >> r;
    vector < pair <int,int> > z (p) , x (q);
    for (int i = 0;i < p; i++){
        cin >> z[i].first >> z[i].second;
    }
    for (int i = 0;i < q; i++){
        cin >> x[i].first >> x[i].second;
    }
    int ans {};
    vector <int> visited (100000 , false);
    for (int i = l; i <= r;i ++){
        for (int j = 0;j < q; j++){
            for (int k = 0; k < p; k++){
                int s = max (z[k].first , x[j].first + i);
                int e = min (z[k].second , x[j].second + i);
                if (s > e) continue;
                else {
                    ans ++;
                    visited[i] = true;
                    break;
                }
            }
            if (visited[i]) break;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}