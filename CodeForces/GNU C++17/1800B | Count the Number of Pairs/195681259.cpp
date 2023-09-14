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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto i: s) mp[i]++;
    int burl{};
    for (int i = 0; i < n; i++) {
        if (mp.count(s[i] + 32)) {
            int mn = min(mp[s[i]], mp[s[i] + 32]);
            mp[s[i]] -= mn;
            mp[s[i] + 32] -= mn;
            burl += mn;
            if (mp[s[i]] == 0) {
                mp.erase(s[i]);
            }
            if (mp[s[i] = 32] == 0)
                mp.erase(s[i] + 32);
        } else if (mp.count(s[i] - 32)) {
            int mn = min(mp[s[i]], mp[s[i] - 32]);
            mp[s[i]] -= mn;
            mp[s[i] - 32] -= mn;
            burl += mn;
            if (mp[s[i]] == 0) {
                mp.erase(s[i]);
            }
            if (mp[s[i] - 32] == 0)
                mp.erase(s[i] - 32);
        }
    }
    int cur = burl;
    for (auto i: mp) {
        burl += (i.second / 2);
    }
    if (burl - cur > k) {
        cout << cur + k << endl;
    }
    else cout << burl << endl;
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