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
void solve () {
    int n;
    string s;
    cin >> n >> s;
    map < string , bool > mp;
    for (int i = 2;i < n - 1;i ++){
     string prev = "" , cur = "";
     prev += s[i - 2] , prev += s[i - 1];
     mp[prev] = true;
     cur += s[i] , cur += s[i + 1];
     if (mp[cur]){
         cout << "YES" << endl;
         return;
     }
    }
    cout << "NO" << endl;
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