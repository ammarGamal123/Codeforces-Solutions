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
bool ok (int mid , int i){
    return i >= mid;
}
void solve () {
    int n;
    cin >> n;
    vector <int> x(n) , y(n);
    vector < int > ans(n);
    for (int i = 0;i < n; i++) cin >> x[i];
    for (int i = 0;i < n; i++){
        cin >> y[i];
        ans[i] = y[i] - x[i];
    }
    sort (rall(ans));
    int r = n - 1 , l = 0 , mid;
    int days {} , idx = -1;
    for (int i = 0;i < n;i ++) {
        if (ans[i] < 0) break;
        //x -= ans[i];
        l = i + 1, idx = -1;
        while (l <= r) {
            mid = (l + r) / 2;
            if (ok(abs(ans[mid]), ans[i])) {
                idx = mid;
                l = mid + 1;
            } else r = mid - 1;
        }
        if (idx != -1) {
            days++;
            r = idx - 1;
        } else break;
    }
    cout << days << endl;
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