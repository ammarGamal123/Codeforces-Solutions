#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
 
const static int N = 1005;
 
void solve () {
    int a , b , c;
    cin >> a >> b >> c;
    if (a < b) swap (a , b);
    int moves {};
    while (a > b) moves ++ , a -= c , b += c;
    cout << moves << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}