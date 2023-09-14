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
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
 
void solve () {
    int n;
    cin >> n;
    vector <int> x(n) , y(n);
    multiset <int> pos , neg;
    for (int i = 0;i < n; i++) cin >> x[i];
    for (int i = 0;i < n; i++){
        cin >> y[i];
        if (y[i] - x[i] >= 0) pos.insert (y[i] - x[i]);
        else neg.insert(y[i] - x[i]);
    }
    int days {};
    while (neg.size()){
        int temp = *prev(neg.end());
        auto it = pos.lower_bound(abs(temp));
        if (it == pos.end()){
            break;
        }
        neg.erase(prev(neg.end()));
        pos.erase(it);
        days ++;
    }
    days += (pos.size()) / 2;
    cout << days << endl;
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