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
 
    string s;
    cin >> s;
    int n = s.size();
 
    for (int i = 0; i < s.size(); i++){
        int x = s[i] - '0';
        if (x % 8 == 0){
            cout << "YES" << endl;
            cout << x << endl;
            return;
        }
        for (int j = i + 1; j < n; j++){
            int y = s[j] - '0';
 
            if ((x * 10 + y) % 8 == 0){
                cout << "YES" << endl;
                cout << x * 10 + y << endl;
                return;
            }
            for (int k = j + 1; k < n; k++){
                int z = s[k] - '0';
                if (((x * 100) + (y * 10) + z) % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << ((x * 100) + (y * 10) + z) << endl;
                    return;
                }
            }
        }
    }
 
    cout << "NO" << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
  //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}