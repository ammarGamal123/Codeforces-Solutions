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
 
void solve1 () {
    int n;
    cin >> n;
 
    vector <int> a (n + 1);
 
    int Max = INT_MAX;
    map <int,int> mp;
    for (int i = 1;i <= n; i++){
        cin >> a[i];
        mp[a[i]] = i;
    }
 
    vector <int> diff;
    int prev = 0;
    bool check = false;
    int cnt = 0;
    for (auto i : mp){
        if (i.second == i.first) cnt ++;
      //  cout << i.first << " " << i.second << endl;
        Max = min (Max , abs (i.first - i.second));
    }
    if (!cnt){
        cout << Max << endl;
        return;
    }
    for (auto i : mp) {
        if (i.first == i.second) {
            if (!check) {
                check = true;
                prev = i.first;
                continue;
            }
            else {
                if (prev == i.first - 1){
                    continue;
                }
                else diff.emplace_back(i.first - prev) , prev = i.first;
            }
        }
    }
    if (diff.empty()){
        int len = 0;
        for (int i = 1; i <= n;i++){
            len = max (len , abs (mp[a[i]] - a[i]));
        }
        cout << len << endl;
        return;
    }
    Max = *max_element (all(diff));
    cout << Max << endl;
 
}
/*
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {
 
        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
*/
void solve (){
 
    int n;
    cin >> n;
 
    vector <int> a (n + 1);
    int GCD = 0;
 
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
 
    for (int i = 1; i <= n; i++){
        if (i == a[i]) continue;
        GCD = __gcd (GCD , abs (i - a[i]));
    }
    cout << GCD << endl;
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