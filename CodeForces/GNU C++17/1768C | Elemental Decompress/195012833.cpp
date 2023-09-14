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
const int N = 1001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve () {
    int n;
    cin >> n;
    vector <int> a(n) ,v1(n) , v2(n), freq (n + 1) , freq1(n + 1), freq2(n + 1);
    priority_queue <pair <int,int> > mx1 , mx2;
    for (auto &i : a) cin >> i;
    for (int i = 0; i < n;i++){
        int val = a[i];
        if (freq[val] == 0){
            v1[i] = val;
            freq[val]++;
            freq1[val]++;
            mx1.push({val , i});
        }
        else if (freq[val] == 1){
            v2[i] = val;
            freq[val]++;
            freq2[val]++;
            mx2.push({val , i});
        }
        else {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = n; i >= 1; i--){
        if (freq1[i]) continue;
        if (mx2.top().first < i){
            cout << "NO" << endl;
            return;
        }
        v1[mx2.top().second] = i;
        mx2.pop();
    }
    for (int i = n; i >= 1; i--){
        if (freq2[i]) continue;
        if (mx1.top().first < i){
            cout << "NO" << endl;
            return;
        }
        v2[mx1.top().second] = i;
        mx1.pop();
    }
    cout << "YES" << endl;
    for (auto i : v1) cout << i << " ";
    cout << endl;
    for (auto i : v2) cout << i << " ";
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