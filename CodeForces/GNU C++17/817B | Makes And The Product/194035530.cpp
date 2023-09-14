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
void solve (){
    int n;
    cin >> n;
    vector <int> a(n);
    map <int,int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]] ++;
    }
    sort (all(a));
    if (a[0] != a[1] && a[1] != a[2]){
        cout << mp[a[2]] << endl;
    }
    else if (a[0] != a[1] && a[1] == a[2]){
        cout << (int) mp[a[2]] * (mp[a[2]] - 1) / 2 << endl;
    }
    else if (a[0] == a[1] && a[1] != a[2]){
        cout << mp[a[2]] << endl;
    }
    else {
        int sum {};
        for (int i = mp[a[0]] - 2 , j = 1; i > 0 ; i -- , j++){
            sum += (int) j * i;
        }
        cout << sum << endl;
    }
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
  //  cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}