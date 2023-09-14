#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
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
    cin >> n;
    vector < int > a(n);
    for (int i = 0 ;i < n;i++){
        cin >> a[i];
    }
    set < int > b;
    for (auto i : a) b.insert(i);
    if (b.size() > 3){
        cout << -1 << endl;
        return;
    }
    if (b.size() == 1){
        cout << 0 << endl;
        return;
    }
    if (b.size() == 2){
        auto it = b.begin();
        int start = *it;
        ++it;
        int End = *it;
        if ((End - start) % 2 == 0) cout << (End - start) / 2 << endl;
        else cout << End - start << endl;
        return;
    }
    vector < int > c ;
    for (auto i : b) c.emplace_back(i);
    bool ok = true;
    if (c[2] - c[1] != c[1] - c[0])
    {
        cout << -1 << endl;
        return;
    }
    else cout << c[2] - c[1] << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}