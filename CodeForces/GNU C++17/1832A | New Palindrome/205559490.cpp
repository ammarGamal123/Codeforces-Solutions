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
 
void solve1 () {
 
    int n , r , b;
    cin >> n >> r >> b;
 
 
    deque <char> ans(n );
    ans[0] = 'R' , ans.back() = 'R';
    r -= 2;
 
    for (int i = 1; i < n - 1; i++){
        if (r >= b){
            ans [i] = 'R';
            r--;
        }
        else {
            ans [i] = 'B';
            b--;
        }
    }
 
    for (auto i : ans)
        cout << i;
    cout << endl;
}
void solve (){
 
    string s;
    cin >> s;
    map <char,int> mp;
    int n = s.size();
 
    for (auto &i : s)
        mp[i] ++;
 
    if (mp.size() == 1){
        cout << "NO" << endl;
        return;
    }
    int cnt  = 0;
    for (int i = 0; i < n;i++){
        if (mp[s[i]] > 1){
            cnt ++;
            mp.erase(s[i]);
        }
    }
    if (cnt > 1){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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