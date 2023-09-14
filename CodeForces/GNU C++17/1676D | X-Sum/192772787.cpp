#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
int n , m;
int a[201][201];
 
int generate_all_dir(int i , int j){
    // 4 cases should be generated
    //
    int res = a[i][j];
    int ci = i + 1 , cj = j + 1;
 
    while (ci >= 0 && ci < n && cj >= 0 && cj < m){
        res += a[ci++][cj++];
    }
    ci = i - 1 , cj = j - 1;
    while (ci >= 0 && ci < n && cj >= 0 && cj < m){
        res += a[ci--][cj--];
    }
    ci = i + 1 , cj = j - 1;
    while (ci >= 0 && ci < n && cj >= 0 && cj < m){
        res += a[ci ++][cj --];
    }
    ci = i - 1 , cj = j + 1;
    while (ci >= 0 && ci < n && cj >= 0 && cj < m){
        res += a[ci--][cj++];
    }
    
    return res;
}
void solve (){
 
    cin >> n >> m;
 
    for(int i = 0;i < n;i++){
        for (int j = 0;j < m ; j++){
            cin >> a[i][j];
        }
    }
    int mx {};
    for (int i = 0;i < n;i++){
        for (int j = 0; j < m; j++){
         mx = max (mx , generate_all_dir(i , j));
        }
    }
    cout << mx  << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}