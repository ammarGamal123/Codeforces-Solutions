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
 
void burn () {
    int n; cin >> n;
    vector <int> a(n);
    vector <int> f (n);
    for (auto &i : a) cin >> i;
    int sum = 0;
    vector <int> stk;
    for (int i = 0;i < n;i++){
        while (!stk.empty() && a[i] <= a[stk.back()]){
            int j = stk.back();
            stk.pop_back();
            sum -= 1LL * (j - (stk.empty() ? -1 : stk.back())) * a[j];
        }
        sum += 1LL * (i - (stk.empty() ? -1 : stk.back())) * a[i];
        f[i] += sum;
        stk.push_back(i);
    }
    sum = 0;
    stk.clear();
    for (int i = n - 1; i >= 0; i--){
        while (!stk.empty() && a[i] <= a[stk.back()]){
            int j = stk.back();
            stk.pop_back();
            sum -= 1LL * ((stk.empty() ? n : stk.back()) - j) * a[j];
        }
        sum += 1LL * ((stk.empty() ? n : stk.back()) - i) * a[i];
        f[i] += sum - a[i];
        stk.push_back(i);
    }
    int p = std::max_element(f.begin() , f.end()) - f.begin();
    for (int i = p - 1; i >= 0; i--){
        a[i] = min (a[i] , a[i + 1]);
    }
    for (int i = p + 1; i < n; i++){
        a[i] = min (a[i] , a[i - 1]);
    }
 
    for (int i = 0;i < n;i++){
        cout << a[i] << "\n"[i == n - 1];
    }
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    // cin >> test_cases;
    while (test_cases--) {
        burn();
     // solve ();
    }
    return 0;
}