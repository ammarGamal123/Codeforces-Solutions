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
const int N1 = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bitstr= 27;
const int NN = 7000000 , OO = 0x3F3F3F3F;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
int solve () {
 
    int n, m;
    cin >> n >> m;
    vector<int> a(n * m);
 
    for (auto &i: a)
        cin >> i;
 
    sort(all(a));
 
    int Min = a[0], Max = a[n * m - 1], Max2 = a[n * m - 2];
    if (n > m)
        swap(n, m);
 
    int ans1 = (n * m - n) * (Max - Min) + (n - 1) *
                                           (a[m * n - 2] - a[0]);
 
    int ans2 = (n * m - n) * (Max - Min) + (n - 1) *
                                           (a[m * n - 1] - a[1]);
 
 
    cout << max(ans1, ans2) << endl;
 
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