#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
//#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, MOD = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
 
void solve () {
 
    int n , k ;
    cin >> n >> k;
 
    vector <int> a (n) , b (n);
    for (auto &i : a)
        cin >> i;
 
    for (auto &i : b)
        cin >> i;
 
    auto a1 = a;
    sort (all(a1));
 
    map <int,set<int>> mp;
 
    for (int i = 0; i < n;i++){
        mp[a1[i]].insert(i);
    }
    vector <int> idx (n);
    for (int i = 0; i < n ;i++){
        idx[i] = *mp[a[i]].begin();
        mp[a[i]].erase(mp[a[i]].begin());
 
    }
    sort (all(b));
 
    for (int i = 0; i < n;i++){
        cout << b[idx[i]] << " ";
    }
    cout << endl;
}
int32_t main() {
    //NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}