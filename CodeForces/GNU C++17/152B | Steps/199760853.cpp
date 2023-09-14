#include <bits/stdc++.h>
#include <tr1/unordered_map>
 
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
int n , m;
bool valid (int x , int y ){
    return x > 0 && x <= n && y > 0 && y <= m;
}
void solve () {
 
    cin >> n >> m;
    int x , y;
    cin >> x >> y;
    int k , ans = 0;
    cin >> k;
    for (int i = 0;i < k; i ++){
        int dx , dy;
        cin >> dx >> dy;
        int l = 0  , r = 2e9 , steps = 0;
        while (l <= r){
            const int mid = (l + r) / 2;
            int xx = x + dx * mid , yy = y + dy * mid;
            if (valid (xx , yy)){
                steps  = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        x += dx * steps , y += dy * steps;
        ans += steps;
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
  //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}