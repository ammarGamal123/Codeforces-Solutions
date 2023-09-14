#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int   long long
#define lll __int128
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 5, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
void solve () {
    int l;
    cin >> l;
    stack<int> st;
    st.emplace(1);
    int res = 0;
    for (int i = 0; i < l; i++)
    {
        string str;
        cin >> str;
        if (str == "for")
        {
            int x;
            cin >> x;
            st.emplace(min(INF, st.top() * x));
        }
        else if (str == "end")
        {
            st.pop();
        }
        else
        {
            res += st.top();
        }
    }
    if (res >= INF)
    {
        cout << "OVERFLOW!!!\n";
    }
    else
        cout << res << '\n';
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