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
int div_3 (int n){
    int ans {};
    while (n % 3 == 0)
        ans ++ , n /= 3;
    return ans;
}
int deg3(int n){
    int cnt {};
    while (n % 3 == 0) cnt ++ , n /= 3;
    return cnt;
}
bool comp (pair < int , int > p1 , pair < int , int > p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}
void solve (){
   int n;
   cin >> n;
   vector < pair < int , int > > a (n);
   for (int i = 0;i < n;i++){
        cin >> a[i].first;
        a[i].second = deg3(a[i].first);
   }
   sort (all(a) , comp);
   for (int i = 0;i < n;i++){
       cout << a[i].first << " ";
   }
   cout << endl;
}
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    //cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}