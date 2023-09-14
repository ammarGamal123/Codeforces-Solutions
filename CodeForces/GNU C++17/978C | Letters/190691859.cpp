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
 
void solve (){
   int n , m;
   cin >> n >> m;
   vector < int > a (n) , prefix(n + 1);
 
   for (int i = 0; i < n;i++){
       cin >> a[i];
   }
   for (int i = 1;i <= n;i++){
       prefix[i] += a[i - 1] + prefix[i - 1];
   }
  // prefix.erase(prefix.begin());
   vector < int > b(m);
   for (int i = 0;i < m;i ++){
       cin >> b[i];
   }
   for (int i = 0;i < m;i++){
       int idx = lower_bound(all(prefix) , b[i]) - prefix.begin();
       cout << idx << " " << b[i] - prefix[idx - 1] << endl;
   }
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}