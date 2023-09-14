#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int  long
#define lll __int128
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
 
void solve () {
    int n , k , mx_health {};
    cin >> n >> k;
    vector < pair < int , int > > a(n);
    for (int i = 0;i < n;i ++){
        cin >> a[i].first;
        mx_health = max (mx_health , a[i].first);
    }
    for (int i = 0;i < n;i ++){
        cin >> a[i].second;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<>> pq;
    for (int i = 0;i < n;i ++){
        pq.push({a[i].second , a[i].first});
    }
    int damage = 0;
    while (!pq.empty() && k > 0){
        if (pq.top().second <= damage )
            pq.pop();
 
        else {
            damage += k;
 
            while (pq.size() && pq.top().second <= damage )
                pq.pop();
 
            if (pq.size())
                k -= pq.top().first;
        }
    }
    cout << (mx_health <= damage ? "YES" : "NO" ) << endl;
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