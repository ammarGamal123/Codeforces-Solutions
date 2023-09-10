#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define ll long long
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define no return void (cout << "NO" << endl)
#define yes return void (cout << "YES" << endl)
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr = 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
const int MAXN = 2e5 + 5;
vector <int> get_divisors(int n) {
 
    vector <int> divisors;
 
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.emplace_back(i);
            if (i != n / i) {
                divisors.emplace_back(n / i);
            }
        }
    }
    return divisors;
}
vector<int> divisors(int n ){
    vector<int>ret;
    for (int i = 1; i <= n  / i; i++) {
        if (n % i == false) {
            ret.emplace_back(i); if (i != n / i) ret.emplace_back(n / i);
        }
    }
    return ret;
}
void burn () {
    int n , c;
    cin >> n >> c;
    int sum = 0 , square = 0;
    for (int i = 0;i < n; i++){
        int a; cin >> a;
        square += (a * a);
        sum += a;
    }
    c -= square;
 
    sum /= (2 * n);
    c /= n , c /= 4;
 
    int part1 = sum * sum + c;
    part1 = sqrt(part1);
    cout << part1 - sum << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    cin >> test_cases;
    while (test_cases--) {
        burn();
        // solve ();
    }
    return 0;
}