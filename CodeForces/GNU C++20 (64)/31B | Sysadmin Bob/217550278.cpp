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
    string s; cin >> s;
    if (s.size() < 3) return void (cout << "No solution" << endl);
 
    int n = s.size();
    string ans = "";
    if (s.front() == '@' || s.back() == '@')
        return void (cout << "No solution" << endl);
    if (count(all(s) , '@') == 1)
        return void (cout << s << endl);
    if (!count(all(s) , '@')){
        return void (cout << "No solution" << endl);
    }
    vector <int> idx;
    for (int i = 0;i < n ;i++){
        if (s[i] == '@') idx.emplace_back(i);
    }
    for (int i = 1; i < idx.size(); i++){
        if (idx[i] - idx[i - 1] <= 2)
            return void (cout << "No solution" << endl);
    }
    int cur = 0;
    for (int i = 0;i < n;i++){
        cout << s[i];
        if (idx[cur] + 1 == i) {
            if (idx[cur] == idx.back()) continue;
            cout << ',';
            cur ++;
        }
    }
 
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
        // solve ();
    }
    return 0;
}