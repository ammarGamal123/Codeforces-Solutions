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
const int N1 = 2e5 + 7, Mod = 10000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
 
void burn () {
 
    int n;
    cin >> n;
    if (n == 1){
        return void (cout << "Yes\n" << "1 2" << endl);
    }
    else if (n % 2 == 0){
        return void (cout << "No" << endl);
    }
 
    cout << "Yes" << endl;
//    for (int i = 1; i <=n; i++){
//        if (2 * i - 1 <= n){
//            cout << i << " " << 2 * n + 2 - 2 * i << endl;
//        }
//        else cout << i << " " << n + 2 + 2 * (n - i) << endl;
//    }
//    cout << "Yes" << endl;
    int cur = 0;
    int i;
    for ( i = 1; i <= (n + 1) / 2; i++){
        cout << i << " " << (n * 2 - cur) << endl;
        cur += 2;
    }
    int idx = i;
    int last = n * 2 - 1;
    for (int i = n; i > (n + 1) / 2; i--){
        cout << idx++ << " " << last << endl;
        last -= 2;
    }
    cout << endl;
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    cin >> test_cases;
    while (test_cases--) {
        burn();
    }
    return 0;
}