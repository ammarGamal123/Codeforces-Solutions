#include <bits/stdc++.h>
using namespace std;
#define int  unsigned long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n;
    double  d , h;
    cin >> n >> d >> h;
 
    vector <int> y(n);
    for (auto &i : y) cin >> i;
    sort (y.begin() , y.end());
    double t_area = 0;
    int cnt {1} , trap {};
    for (int i = 1; i < n; i ++){
        if (y[i] - y[i - 1] >= h) cnt ++;
        else trap ++;
    }
 
    t_area = ((h * d) / 2.0) * (cnt);
 
    double total_area = t_area;
 
 
    for (int i = 1;i < n; i++){
        if (y[i] - y[i - 1] < h){
            double H = y[i] - y[i - 1];
            double  B = d * (y[i - 1] + h - y[i]) / h;
            total_area += (d + B) * (H / 2.0);
        }
    }
    cout << fixed << setprecision(6);
    cout << total_area << endl;
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