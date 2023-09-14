#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N1 = 2e5 + 7, Mod = 10000007 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
bool isPrime (int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
void burn () {
    int n , m;
    cin >> n >> m;
 
    int ans = n * m;
    int turn = 1;
    bool Akshat = false;
    bool Malvika = false;
    while (ans > 0) {
        if (!Akshat && n && m) {
            Akshat = true;
            -- n ,  -- m ;
            ans = n * m;
            Malvika = false;
        } else if (!Malvika) {
            Malvika = true;
            -- n , -- m;
            ans = n * m;
            Akshat = false;
        }
    }
    if (Akshat){
        cout << "Akshat" << endl;
    }
    else cout << "Malvika" << endl;
 
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
   // cin >> test_cases;
    while (test_cases--) {
        burn();
    }
    return 0;
}