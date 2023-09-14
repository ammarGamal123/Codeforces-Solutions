#include <bits/stdc++.h>
using namespace std;
#define int  unsigned long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n , m , h; cin >> n >> m >> h;
    vector <pair <int,int>> a(n);
    for (int i = 0;i < n; i++){
 
        vector <int> minutes(m , 0);
        int points {} , penalty{};
        for (int j = 0;j < m; j ++){
            cin >> minutes[j];
        }
        sort (minutes.begin() , minutes.end());
        int cur = 0;
        for (auto k : minutes){
            if (cur + k <= h){
                points ++ , penalty += cur + k;
            }
            cur += k;
        }
        a[i] = {points , penalty};
    }
    pair <int,int> rudolf {a.front().first , a.front().second};
    // sort (a.begin() , a.end());
 
    int rank = 1;
    for (int i = 1;i < n;i++) {
        if (rudolf.first == a[i].first){
            if (rudolf.second > a[i].second) rank ++;
        }
        else if (rudolf.first < a[i].first) rank ++;
    }
    cout << rank << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1 , Case = 1;
 
    // freopen("milk.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
    cin >> test_cases;
    while (test_cases--) {
        // burn();
        solve ();
    }
    return 0;
}