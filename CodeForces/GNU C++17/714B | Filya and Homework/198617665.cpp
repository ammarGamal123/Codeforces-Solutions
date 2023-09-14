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
    vector <int> a(n);
    map <int,int> mp;
    for (auto &i : a) {
        cin >> i;
        mp[i] ++;
    }
    if (mp.size() > 3){
        cout << "NO" << endl;
        return;
    }
    if (mp.size() <= 2){
        cout << "YES" << endl;
        return;
    }
    sort (all(a));
    int small = a[0] , big = a[n - 1];
    int target = -1 , meduim = -1;
    for (int i = 0;i < n;i++){
        if (a[i] != small && a[i] != big ){
            meduim = a[i];
            break;
        }
    }
    for (int i = 1;i < n;i++){
        if (a[i] != a[i - 1]){
            target = a[i] - a[i - 1];
            break;
        }
    }
    for (int i = 0;i < n;i++) {
        if (a[i] != meduim) {
            if (a[i] + target != meduim && a[i] - target != meduim)
            {
                //cout << a[i] << " " << target << " " << meduim << endl;
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
 
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