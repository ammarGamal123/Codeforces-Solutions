#include <bits/stdc++.h>
#include <tr1/unordered_map>
 
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
 
void solve () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    pair <int,char> replace = {-1 , 'z' + 1};
    char a = 'z';
    for (int i = 1; i < s.size(); i++){
        if (s[i] <= s[0]){
            if (s[i] <= a){
                a = s[i];
                replace = {i , a};
            }
        }
    }
    if (replace.first == -1 && replace.second == 'z' + 1){
        cout << s << endl;
        return;
    }
    cout << replace.second;
    for (int i = 0;i < s.size(); i++){
        if (i == replace.first) continue;
        else cout << s[i] ;
    }
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