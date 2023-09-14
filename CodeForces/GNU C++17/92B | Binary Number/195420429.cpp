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
    string s;
    cin >> s;
    int ans {};
    int n = s.size();
    while (s.size() > 1){
        if (s[s.size() - 1] == '1'){
            for (int i = s.size() - 1; i >= 0; i--)
                if (s[i] == '1'){
                    s[i] = '0';
                }
                else {
                    s[i] = '1';
                    break;
                }
                ans ++;
        }
        if (s[s.size() - 1] == '0'){
            s.erase(s.size() - 1 , 1);
            ans ++;
        }
    }
    if (s[0] == '0'){
        cout << ans + 1 << endl;
    }
    else cout << ans << endl;
 
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