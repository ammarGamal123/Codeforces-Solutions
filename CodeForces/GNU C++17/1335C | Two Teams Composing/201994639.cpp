#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
void solve () {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_size{};
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    if (n == 2 || mp.size() == n) {
        cout << 1 << endl;
        return;
    }
    int size = mp.size();
    for (auto i: mp) {
        max_size = max(i.second, max_size);
    }
    if (mp.size() > max_size){
        cout << max_size << endl;
    }
    else if (mp.size() < max_size){
        cout << mp.size() << endl;
    }
    else {
        cout << max_size - 1 << endl;
    }
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}