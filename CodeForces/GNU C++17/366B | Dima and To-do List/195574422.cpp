#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int   long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve () {
    int n , k;
    cin >> n >> k;
 
    vector <int> a(n);
 
    for (auto &i : a)
        cin >> i;
    int div = n / k , ans {} , sum {} , update_sum {INT_MAX};
    k;
    if (n == k){
        int mn = *min_element(all(a)) , idx = -1;
        for (int i = 0; i < n; i++){
            if (mn == a[i]) {
                idx = i + 1;
                break;
            }
        }
        cout << idx << endl;
        return;
    }
    int cnt {};
    for (int i = 0; i < k; i++){
        sum = 0;
        for (int j = i; j < n; j += k){
            sum += a[j];
        }
        if (sum < update_sum) {
            update_sum = sum;
            ans = i + 1;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}