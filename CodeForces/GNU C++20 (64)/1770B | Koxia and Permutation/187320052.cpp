#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int   long long
#define lll __int128
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 5, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
void solve () {
    int n , k;
    cin >> n >> k;
    if (k == 1 || k == n){
        for (int i = 1;i <= n; i++){
            cout << i << " ";
        }
        cout << endl;
        return ;
    }
    int j = 1;
    for (int i = 1; i <= n; i++){
        if (i & 1)
            cout << n - j + 1 << " ";
        else {
            cout << j << " ";
            j++;
        }
    }
    cout << endl;
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