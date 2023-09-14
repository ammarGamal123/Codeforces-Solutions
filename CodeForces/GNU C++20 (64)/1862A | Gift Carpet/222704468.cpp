#include <bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
void solve () {
    int n , m;
    cin >> n >> m;
    vector <vector <char>> a1 (n , vector <char> (m));
    for (int i = 0;i < n; i++){
        for (int j = 0;j < m; j++) cin >> a1[i][j];
    }
    vector <vector <char>> a (m , vector <char>(n));
    for (int i = 0;i < m; i++){
        for (int j = 0;j < n; j++)
            a[i][j] = a1[j][i];
    }
    string cur = "";
    for (int i = 0;i < m;i++){
        if (cur.empty()){
            if (count(a[i].begin() , a[i].end() , 'v'))
                cur += 'v';
        }
        else if (cur.back() == 'v'){
            if (count(a[i].begin() , a[i].end() , 'i'))
                cur += 'i';
        }
        else if (cur == "vi"){
            if (count(a[i].begin() , a[i].end() , 'k'))
                cur += 'k';
        }
        else if (cur == "vik"){
            if (count(a[i].begin() , a[i].end() , 'a'))
                cur += 'a';
        }
    }
    if (cur == "vika"){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
 
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