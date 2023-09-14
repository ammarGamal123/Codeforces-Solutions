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
    string s;
    cin >> s;
    int ans {} , n = s.size();
    vector < int > ok(N , 0);
    stack < int > st;
    for (int i = 0;i < n;i ++){
        if (s[i] == '(')
            st.push(i);
        else if (!st.empty()){
            ok[i] = ok[st.top()] = true;
            st.pop();
        }
    }
    for (int i = n - 1; i >= 0;i --){
        if (ok[i]){
            ok[i] += ok[i + 1];
        }
        if (s[i] == '('){
            ans = max (ans , ok[i]);
        }
    }
    int cnt {};
    for (int i = 0;i < n;i ++){
        if (s[i] == '(' && ok[i] == ans )
            ++ cnt;
    }
    if (ans == 0)
        cout << "0 1" << endl;
    else
    cout << ans << " " << cnt << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}