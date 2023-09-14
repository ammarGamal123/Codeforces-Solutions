#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int long long
#define lll __int128
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
void solve () {
    int n , x , y;
    cin >> n >> x >> y;
    if (!x && !y)
    {
        cout << "-1" << endl;
        return;
    }
    if (x && y)
    {
        cout << "-1" << endl;
        return;
    }
    int mx = max (x , y) , cur = 1;
    map < int , int > mp;
    for (int i = 2;i <= n;i ++){
 
        if (mp[cur] == mx)
             cur = i;
       ++ mp[cur];
 
    }
    bool valid = true;
    for (auto i : mp){
        if (i.second != mx)
            valid = false;
    }
    if (!valid)
    {
        cout << -1 << endl;
        return;
    }
    for (auto i : mp){
        for (int j = 0; j < i.second; j++){
            cout << i.first << " " ;
        }
    }
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