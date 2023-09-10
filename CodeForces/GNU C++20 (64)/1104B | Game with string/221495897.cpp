#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    string s; cin >> s;
    stack <char> st;
    int cnt {};
    st.push(s.front());
    for (int i = 1;i < s.size(); i++){
        if (!st.empty() && s[i] == st.top()) st.pop() , cnt ++;
        else st.push(s[i]);
    }
    cout << (cnt & 1 ? "YES" : "NO") << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}