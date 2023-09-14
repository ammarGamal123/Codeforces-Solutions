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
 
    vector <int> p (n);
 
    map <int,int> mp;
 
    for (int i = 0;i < n;i++) {
        cin >> p[i];
        mp[p[i]] = i;
    }
 
 
    if (n == 1){
        cout << "YES" << endl;
        return;
    }
 
    int diff = p[0];
 
    for (int i = 1; i < n;i++){
        if (abs (diff - p[i]) != 1){
            int Max = max (diff , p[i]) , Min = min (diff , p[i]);
            if (Min != *min_element(all(p))
            || Max != *max_element(all(p))){
                cout << "NO" << endl;
                return;
            }
            else diff = p[i];
        }
        else
            diff = p[i];
    }
    cout << "YES" << endl;
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