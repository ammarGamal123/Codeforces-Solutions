#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 7000000 , OO = 0x3F3F3F3F;
void solve () {
 
    int n;
    cin >> n;
 
    vector <int> a (n) , a_dash(n);
 
    for (auto &i : a)
        cin >> i;
 
    for (auto &i : a_dash)
        cin >> i;
 
    vector <int> sorted;
    sorted = a;
    sort (all(sorted));
    if (a_dash == sorted){
        cout << 1 << " " << n << endl;
        return;
    }
 
    int l = 0;
    int r = n - 1;
 
    for (int i = 0; i < n && l < r;i++){
        if (a[l] == a_dash[l] && l < r){
            l++;
        }
        if (a[r] == a_dash[r] && l < r){
            r--;
        }
    }
    if (l){
        int cur = l - 1;
        while (a_dash[l] >= a_dash[cur] && cur >= 0){
            l = cur;
            cur --;
        }
    }
    if (r){
        int cur = r + 1;
        while (a_dash[r] <= a_dash[cur] && cur < n){
            r = cur;
            cur ++;
        }
    }
    cout << l + 1 << " " << r + 1 << endl;
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