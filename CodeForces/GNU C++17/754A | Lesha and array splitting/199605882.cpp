#include <bits/stdc++.h>
#include <tr1/unordered_map>
 
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
    vector <int> a(n);
    for (auto &i : a)
        cin >> i;
 
    int sum = 0;
    for (int i = 0;i < n;i++){
        sum += a[i];
    }
    if (sum){
        cout << "YES" << endl;
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    else {
        sum = 0;
        for (int i = 0;i < n;i++){
            sum += a[i];
            if (sum){
                cout << "YES" << endl;
                cout << 2 << endl;
                cout << 1 << " " << i + 1 << endl;
                cout << i + 2 << " " << n << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("mex.in" , "r" , stdin );
  //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}