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
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve (){
    int x1, x2, y1, y2;
 
    cin >> x1 >> y1 >> x2 >> y2;
 
    int x, y;
 
    cin >> x >> y;
 
    int absx = abs(x1 - x2);
    int absy = abs(y1 - y2);
 
    if(absx % x == 0 && absy % y == 0 && ((absx/x)%2 == (absy/y)%2)) {
        cout << "YES";
        return;
    }
 
    cout << "NO";
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
  //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}