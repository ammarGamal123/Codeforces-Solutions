#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int long long
#define lll __int128
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
int freq[26][26];
void solve () {
    memset (freq , 0 , sizeof freq);
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for (int i = 1; i < n - 1; i++){
        flag |= freq[s[i] - 'a'][s[i + 1] - 'a'];
        freq[s[i - 1] - 'a'][s[i] - 'a']++;
    }
    cout << (flag ? "YES" : "NO") << endl;
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