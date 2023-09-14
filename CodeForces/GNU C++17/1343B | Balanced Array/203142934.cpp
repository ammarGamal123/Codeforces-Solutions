#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
 
void solve () {
    int n;
    cin >> n;
    if ((n / 2) & 1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector <int> even;
    vector <int> odd;
 
    int cur_even = 2;
    int cur_odd = 1;
    for (int i = 0; i < (n / 2) - 1; i++){
        even.emplace_back(cur_even);
        cur_even += 2;
        odd.emplace_back(cur_odd);
        cur_odd += 2;
    }
    even.emplace_back(cur_even);
    odd.emplace_back(cur_odd + (n / 2));
 
    for (auto i : even) cout << i << " ";
    for (auto i : odd) cout << i << " " ;
    cout << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
     cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}