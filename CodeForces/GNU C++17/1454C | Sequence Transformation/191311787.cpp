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
void solve (){
    int n;
    cin >> n;
    vector <int> a (n);
   unordered_map < int , vector <int> > mp;
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
    for (auto it = a.begin(); it < a.end() - 1; it++) {
        if (*it == *(it + 1)) {
            a.erase(it);
            it--;
        }
    }
    n = a.size();
    for (int i = 0;i < n;i ++){
        mp[a[i]].push_back(i + 1);
    }
   if (mp.size() == 1){cout << "0" << endl; return;}
   if (mp.size() == n) {cout << "1" << endl; return;}
   int ans {} , op {1} , mn_op {INT_MAX};
   for (auto i : mp){
       op = 1;
       for (auto j : i.second) {
           if (j != 1 && j != n) {
               op++;
           }
       }
           mn_op = min (op , mn_op);
   }
   cout << mn_op << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve ();
    }
    return 0;
}