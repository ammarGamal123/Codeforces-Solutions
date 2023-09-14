#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
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
const int N1 = 2e5 + 7, Mod = 5 , inf = 1e9 , bitstr= 27;
const int NN = 1000 + 5 , OO = 0x3F3F3F3F;
 
int gcd(int a ,int b){
    while(b != 0){int curr = a ; a = b; b = curr % b;}
    return a;
}
int lcm (int a , int b){
    return (a / gcd(a,b)) * b;
}
void burn () {
    int n;
    cin >> n;
    int ans = 0;
    if (n == 1){
        return void (cout << 1 << endl);
    }
    if (n == 2){
        return void (cout << 2 << endl);
    }
    if (n == 3){
        return void (cout << 6 << endl);
    }
    if (n % 2){
        cout << n * (n - 1) * (n - 2) << endl;
    }
    else if (n % 3){
        cout << n * (n - 1) * (n - 3) << endl;
    }
    else cout << (n - 1) * (n - 2) * (n - 3) << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
   //  cin >> test_cases;
    while (test_cases--) {
        burn();
    }
    return 0;
}