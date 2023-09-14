#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbeg    in(), (x).rend()
#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, MOD = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
 
 
void solve (){
 
    int n;
    cin >> n;
 
    vector <pair <int , string>> a(n);
 
    for (auto &i : a)
        cin >> i.first >> i.second;
 
 
    sort (all(a));
 
    set <int> fst_skill , scd_skill;
    int Min = 0;
    int perfect = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i].second[0] == '1' && a[i].second[1] == '1'){
            perfect = min (perfect , a[i].first);
        }
 
        if (a[i].second[0] == '1')
            fst_skill.insert(a[i].first);
 
        if (a[i].second[1] == '1')
            scd_skill.insert(a[i].first);
    }
    if (fst_skill.size() > 0)
        Min += *fst_skill.begin();
    else {
        cout << -1 << endl;
        return;
    }
    if (scd_skill.size() > 0)
        Min += *scd_skill.begin();
    else{
        cout << -1 << endl;
        return;
    }
    if (!Min){
        cout << -1 << endl;
    }
    else cout << min ( Min , perfect ) << endl;
}
 
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}