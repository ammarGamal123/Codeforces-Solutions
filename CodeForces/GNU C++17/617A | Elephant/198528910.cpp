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
    int n;
    cin >> n;
    int moves {};
    if (n >= 5){
        moves += n / 5;
        n %= 5;
    }
    if (n >= 4){
        moves += n / 4;
        n %= 4;
    }
    if (n >= 3){
        moves += n / 3;
        n %= 3;
    }
    if (n >= 2){
        moves += n / 2;
        n %= 2;
    }
    if (n >= 1){
        moves += n / 1;
        n %= 1;
    }
    cout << moves << endl;
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