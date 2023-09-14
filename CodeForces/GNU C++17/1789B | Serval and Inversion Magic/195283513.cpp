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
bool check_palindrome (const string &s){
    int n = s.size();
    for (int i = 0; i < n;i ++){
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}
void solve () {
    int n;
    string s;
    cin >> n >> s;
    int prev {-1} , cnt {};
    int l = 0 , r = n - 1;
    while (l < r){
        bool check = (s[l++] == s[r--]);
        if (!check && prev != 0){
            cnt ++;
        }
        prev = check;
    }
    if (cnt > 1){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
 
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