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
const int N = 1001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr),cout.tie(nullptr);
void solve2 () {
    int n, m;
    cin >> n >> m;
    if (m > n) {
        cout << 0 << endl;
        return;
    }
    int div = n / m;
    if (div <= 10){
        int ans {};
        for (int i = 1; i <= div; i++){
            ans += (i * m) % 10;
        }
        cout << ans << endl;
        return;
    }
    int mm = m % 10 , ans {} , cur {1};
    int minus = 0;
    if (mm == 2 || mm == 4 || mm == 6 || mm == 8){
        minus = 5;
    }
    else if (mm == 5){
        minus = 2;
    }
    while (div % 10 != 0 && m < 10 ){
        div --;
        ans += (mm * cur);
        cur ++;
    }
 
    cout << ans + ((div / 10 ) * 45) << endl;
}
void solve (){
    int n , m;
    cin >> n >> m;
    int div = n / m;
    int sum {};
    for (int i = 0; i < 10;i++){
        sum += ((i + 1) * m) % 10;
    }
    int ans {};
    ans += (div / 10) * sum;
    for (int i = 0; i < div % 10; i++){
        ans += ((i + 1) * m) % 10;
    }
    cout << ans << endl;
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