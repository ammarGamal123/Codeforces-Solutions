#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long long
#define lll __int128
//#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
vector <int> a2;
int n , ans = INT_MAX , temp;
int can (){
    int cnt {} , need = a2[1] - a2[0];
    for (int i = 2; i < n;i++){
        if (a2[i] - a2[i - 1] != need){
            if ((a2[i] - 1) - a2[i - 1] == need)
                cnt ++ , a2[i] -= 1;
            else if ((a2[i] + 1) - a2[i - 1] == need)
                cnt ++ , a2 [i] += 1;
            else return INT_MAX;
        }
    }
    return cnt;
}
void solve (){
    cin >> n;
    vector <int> a(n);
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    if (n <= 2) {cout << "0" << endl; return;}
    for (int x = -1; x <= 1; x++){
        for (int y = -1; y <= 1; y++){
            a2 = a;
            a2[0] += x;
            a2[1] += y;
            temp = can();
            if (temp != INT_MAX)
                ans = min (ans , abs (x)  + abs (y)  + temp);
        }
    }
    if (ans != INT_MAX)
        cout << ans << endl;
    else cout << "-1" << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
   // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}