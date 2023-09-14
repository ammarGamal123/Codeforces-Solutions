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
    int n , k;
    cin >> n >> k;
    vector <int> a (n);
    map <int,int> mp , idx;
 
    for (int i = 0;i < n;i++){
        cin >> a[i];
        mp[a[i]] ++;
        idx [a[i]] = i + 1;
    }
    if (mp.size() < k){
        cout << "NO" << endl;
        return;
    }
    else {
        cout << "YES" << endl;
        for (auto i : idx) {
            if (k > 0) {
                cout << i.second << " ";
                --k;
            }
        }
        cout << endl;
    }
 
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}