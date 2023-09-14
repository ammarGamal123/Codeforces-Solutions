#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
int arr[N];
void solve () {
    int n , k;
    cin >> n >> k;
    vector <int> a (n);
    map <int,int> mp;
    for (auto &i : a ){
        cin >> i;
        mp[i] ++;
    }
    sort (all(a));
    for (auto i : mp){
        if (i.second >= k){
            cout << 0 << endl;
            return;
        }
    }
    int ans = 1e11;
    for (int i = 0; i < n; i++){
        int x = 1;
        a[i] /= 2;
        while (a[i]){
            if (mp[a[i]] < k){
                mp[a[i]]++;
                arr[a[i]] += x;
            }
            x++;
            a[i] /= 2;
        }
    }
    for (auto i : mp){
        int u = i.first , s = i.second;
        if (s >= k){
            ans = min (ans , arr[u]);
        }
    }
    cout << ans << endl;
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}