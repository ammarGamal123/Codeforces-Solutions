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
 
void solve (){
    int R;
    cin >> R;
    vector <int> r(R);
    for (auto &i : r) cin >> i;
    int P;
    cin >> P;
    vector <int> p(P);
    for (auto &i : p) cin >> i;
    int P2;
    cin >> P2;
    vector <int> p2 (P2);
    for (auto &i : p2) cin >> i;
    double A , B;
    cin >> A >> B;
    double division = A / B;
    cout << fixed << setprecision(6);
    double r1 = *max_element(all(r));
    double p1 = *max_element(all(p));
    double P_in = *min_element(all(p2));
    double r2 =
          sqrt( (B * p1 * r1 * r1)
            /   (A * P_in + B  * p1)
          );
    cout << r2 << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}