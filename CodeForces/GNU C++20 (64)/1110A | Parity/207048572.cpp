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
const int N1 = 2e5 + 7, Mod = 2 , inf = 1e9 , bitstr= 27;
const int NN = 1e7 + 5 , OO = 0x3F3F3F3F;
long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {
 
        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % Mod;
        }
        base = (base * base) % Mod;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}
int add(int a, int b)
{
    return (a + b) % Mod;
}
 
int mul(int a, int b)
{
    return ((int)a * b) % Mod;
}
void burn () {
 
    int b , k;
    cin >> b >> k;
    vector <int> a (k);
    for (int i = 0; i < k;i++){
        cin >> a[i];
    }
 
    int ans = 0;
 
    for (int i = k - 1 , power = 0; i >= 0; i -- , power++){
        ans = add (ans , mul (a[i] , fast_power(b , power)));
    }
    if (ans & 1){
        cout << "odd" << endl;
    }
    else cout << "even" << endl;
}
int32_t main() {
    //NeedForSpeed
    int test_cases = 1 , Case = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , x);
    // cin >> test_cases;
    while (test_cases--) {
        burn();
    }
    return 0;
}