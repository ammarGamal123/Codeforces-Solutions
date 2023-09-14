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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map < char , int > mp;
    for (int i = 0;i < n;i++){
        mp[s[i]] ++;
    }
    int mx_sum {2};
    set < int > a , b;
    for (int i = 0;i < n - 1;i++){
        a.insert(s[i]);
        mp[s[i]] --;
        if (mp[s[i]] == 0) mp.erase(s[i]);
        if (a.size() + mp.size() >= mx_sum)
            mx_sum = a.size() + mp.size();
    }
    cout << mx_sum << endl;
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