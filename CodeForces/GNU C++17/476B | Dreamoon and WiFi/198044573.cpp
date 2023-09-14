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
 
double C(int n, int r) {
    if (!r) return 1;
    for (int lim = r - 1, j = n - 1; lim; j--, lim--) n *= j;
    for (int i = r - 1; i; i--) r *= i;
    return (double) n / r;
}
 
void solve () {
    string s , s2;
    cin >> s >> s2;
    cout << fixed << setprecision(10) ;
    int e1 {} , e2 {};
    int sign {};
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '+') e1 ++;
        else if (s[i] != '+') e1--;
        if (s2[i] == '+') e2 ++;
        else if (s2[i] == '-') e2 --;
        else sign ++;
    }
    int diff = abs (e2 - e1);
    double ans = 0;
    if (diff > sign || (diff & 1) != (sign & 1)){
        cout << 0 << endl;
        return;
    }
    else if (!sign) ans = !diff;
    else {
        ans = C(sign, (diff + sign) / 2) / pow(2, sign);
    }
    cout << ans << endl;
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
  //  freopen("mex.in" , "r" , stdin );
   // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}