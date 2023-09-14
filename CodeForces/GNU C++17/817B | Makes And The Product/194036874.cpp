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
    vector <int> arr(n);
    map <int,int> mp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]] ++;
    }
    sort (all(arr));
    int a = 0 , b = 0 , c = 0;
    auto it = mp.begin();
    a = it->second;
    it ++;
    if (a < 3) b = it->second;
    it ++;
    if (a + b < 3) c = it->second;
    if (a && !b && !c){
        cout << a * (a - 1 ) * (a - 2) / 6 << endl;
    }
    else if (a && b && !c){
        cout << (a == 1  ? b * (b - 1)  / 2 : b) << endl;
    }
    else if (a && b && c ) cout << a * b * c << endl;
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