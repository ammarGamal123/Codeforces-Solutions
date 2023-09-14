#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int   long long
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
    string s;
    cin >> s;
    for (int i = 0; i < n;i++){
        if (s[i] < 97) s[i] += 32;
    }
    for (auto it = s.begin(); it < s.end() - 1; it++) {
        if (*it == *(it + 1)) {
            s.erase(it);
            it--;
        }
    }
    if (s.size() > 4 || s.size() < 4){
        cout << "NO" << endl;
        return;
    }
    int cnt {};
    bool valid = false ;
 
        if (s[0] == 'm' || s[0] == 'M') cnt ++;
         if (s[1] == 'e' || s [1] == 'E') cnt ++;
         if (s[2] == 'O' || s[ 2] == 'o') cnt ++;
         if (s[ 3] == 'w' || s[ 3] == 'W') cnt ++;
        if (cnt == 4) valid = true;
 
    if (valid) cout << "YES" << endl;
    else cout << "NO" << endl;
 
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