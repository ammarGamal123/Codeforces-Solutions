#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
//#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
void solve () {
    int n , k;
    cin >> n >> k;
    vector < int > a(n);
    map < int, int > mp;
    for (int i = 0;i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    set < int > st;
    for (auto i : mp){
        if (i.second >= k) st.insert(i.first);
    }
    if (st.empty()){cout << -1 << endl; return;}
    int ans {} , mx {} , l = 0 , r = 0 , cnt {} , ptr {-1} ;
    for (int x : st){
        if (x == ptr + 1)
            cnt ++;
        else cnt = 1;
        if (cnt > mx )
        {
            mx = cnt , l = x - cnt + 1 , r = x;
        }
        ptr = x;
    }
    cout << l << " " << r << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve ();
    }
    return 0;
}