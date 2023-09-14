#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve () {
    int n;
    cin >> n;
    vector <int> a(n);
    int even {} , odd{};
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] & 1) {
            odd += a[i];
        } else
            even += a[i];
    }
    if(even <= odd) {
        cout << "NO" << endl;
        return;
    }
    cout<<"YES"<<endl;
}
void solve1 (){
    int n;
    cin >> n;
    string s;
    cin >> s;
    s += '#';
    unordered_set <char> st;
    int flip = 1;
    for (int i = 0;i < n;i++){
        if (!st.count(s[i])){
            st.insert(!flip);
        }
    }
    for (auto i : st) cout << i << " ";
    cout << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}