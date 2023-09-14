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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = -1 , l = -1;
    for (int i = 0;i < s.size(); i++) {
        if (s[i] == 'R') {
            r = i;
            break;
        }
    }
    for (int i = 0;i < n;i ++){
        if (s[i] == 'L')
            l = i;
    }
    int valid = -1;
    for (int i = 1;i < n;i ++){
        if (s[i] == 'R' && s[i - 1] == 'L')
            valid = i;
    }
    if ((r <= l && r != -1 && l != -1)){
        cout << 0 << endl;
    }
    else if (valid)
        cout << valid << endl;
    else cout << -1 << endl;
}
 
int32_t main() {
   // NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}