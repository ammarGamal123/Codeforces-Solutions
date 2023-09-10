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
bool getBit(int n  , int index){
    return (n >> index) & 1;
}
void burn () {
    int n , x;
    cin >> n >> x;
    vector <int> a (n) , b (n) , c (n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    for (auto &i : c) cin >> i;
     int ans = 0;
     int cnt = 0 , need = x;
     int limit = 33;
     while (need > 0 ) cnt++ , need /= 2;
    for (int i = 0 ; i < n ; i++) {
       bool valid = true;
       for (int j = 0; j < limit; j++){
           if (!getBit(x , j) && getBit(a[i] , j)) {
               valid = false;
               break;
           }
       }
        if (!valid) break;
        else ans |= a[i];
        if (ans == x) return void (cout << "Yes" << endl);
    }
    for (int i = 0 ; i < n ; i++) {
        bool valid = true;
        for (int j = 0; j < limit; j++){
            if (!getBit(x , j) && getBit(b[i] , j)) {
                valid = false;
                break;
            }
        }
        if (!valid) break;
        else ans |= b[i];
        if (ans == x) return void (cout << "Yes" << endl);
    }
    for (int i = 0 ; i < n ; i++) {
        bool valid = true;
        for (int j = 0; j < limit; j++){
            if (!getBit(x , j) && getBit(c[i] , j)) {
                valid = false;
                break;
            }
        }
        if (!valid) break;
        else ans |= c[i];
        if (ans == x) return void (cout << "Yes" << endl);
    }
    if (ans == x) cout << "Yes" << endl;
    else  cout << "No" << endl;
}
void print_Number(int n){
    if (n <= 1) {
        cout << n;
        return;
    }
    print_Number(n >> 1);
    cout << (n & 1) ;
}
void solve (){
 
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