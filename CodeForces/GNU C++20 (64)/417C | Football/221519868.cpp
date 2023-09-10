#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n , k; cin >> n >> k;
    if (n <= k * 2) return void (cout << -1 << endl);
    cout << n * k << endl;
    for (int i = 1;i <= n; i++) {
        for (int j = 0; j < k; j++) {
            cout << i << " " << 1 + (i + j) % n << endl;
        }
    }
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}