#include <bits/stdc++.h>
using namespace std;
#define int   long long
#define endl '\n'
#define Ammar_Albaironey ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
 
void solution () {
    int n , m;
    cin >> n >> m;
    priority_queue < int > pq;
    for(int i = 0;i < n;i ++){
        int x;
        cin >> x;
        pq.push(-x);
    }
    for (int i = 0;i < m; i++){
        int y;
        cin >> y;
        pq.pop();
        pq.push(-y);
    }
    int ans {};
    while (!pq.empty()) {
        ans += (pq.top() * -1);
        pq.pop();
    }
    cout << ans << endl;
 
}
int32_t main() {
    Ammar_Albaironey
    int T = 1;
    cin >> T;
    while (T--){
        solution ();
    }
    return 0;
}