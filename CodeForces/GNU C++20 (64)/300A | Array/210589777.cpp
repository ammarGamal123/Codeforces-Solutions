#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
 
void burn () {
    int n;
    cin >> n;
    set <int> less , greater , equal;
    bool fst = false , scd = false;
    for (int i = 0;i < n; i++){
        int x; cin >> x;
        if (x < 0 && !fst) {
            less.insert(x);
            fst = true;
        }
        else if (x > 0 && !scd){
            greater.insert(x);
            scd = true;
        }
        else {
            equal.insert(x);
        }
    }
    cout << 1 << " " << *less.begin() << endl;
 
    if (greater.empty()){
        auto fst = equal.begin();
        int fst_neg = *fst;
        equal.erase(fst);
        auto scd = equal.begin();
        int scd_neg = *scd;
        equal.erase(scd);
        cout << 2 << " " << fst_neg << " " << scd_neg << endl;
    }
 
     else cout << 1 << " " << *greater.begin() << endl;
    cout << equal.size() << " ";
    for (auto &i : equal) cout << i << " ";
    cout << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        burn();
    }
    return 0;
}