#include <bits/stdc++.h>
 
using namespace std;
using int64 = int64_t;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int    long long
#define lll __int128
#define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define endl '\n'
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
const int64 INF = 1'000'000'000LL + 100;
const long double PI = acos(-1);
const int N = 2e5 + 7, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
bool X_win (vector <string> &s){
    if (s[0][0] == 'X' && s[0][1] == 'X' && s[0][2] == 'X'
       ||s[1][0] == 'X' && s[1][1] == 'X' && s[1][2] == 'X'
       ||s[2][0] == 'X' && s[2][1] == 'X' && s[2][2] == 'X'
       || s[0][0] == 'X' && s[1][0] == 'X' && s[2][0] == 'X'
       ||s[0][1] == 'X' && s[1][1] == 'X' && s[2][1] == 'X'
       ||s[0][2] == 'X' && s[1][2] == 'X' && s[2][2] == 'X'
       ||s[0][0] == 'X' && s[1][1] == 'X' && s[2][2] == 'X'
       || s[0][2] == 'X' && s[1][1] == 'X' && s[2][0] == 'X')
        return true;
    else return false;
}
bool Zeros_win(vector <string> &s){
    if (s[0][0] == '0' && s[0][1] == '0' && s[0][2] == '0'
        ||s[1][0] == '0' && s[1][1] == '0' && s[1][2] == '0'
        ||s[2][0] == '0' && s[2][1] == '0' && s[2][2] == '0'
        || s[0][0] == '0' && s[1][0] == '0' && s[2][0] == '0'
        ||s[0][1] == '0' && s[1][1] == '0' && s[2][1] == '0'
        ||s[0][2] == '0' && s[1][2] == '0' && s[2][2] == '0'
        ||s[0][0] == '0' && s[1][1] == '0' && s[2][2] == '0'
        || s[0][2] == '0' && s[1][1] == '0' && s[2][0] == '0')
        return true;
    else return false;
}
void solve () {
    int n = 3;
    vector <string> s (3);
    int count_0 = 0 , count_X = 0;
    int dot = 0;
    for (int i = 0;i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> s[i][j];
            if (s[i][j] == '0') count_0 ++;
            if (s[i][j] == 'X') count_X ++;
            if (s[i][j] == '.') dot ++;
        }
    }
    if (dot == 9){
        cout << "first" << endl;
        return;
    }
    if (X_win(s) && Zeros_win(s)){
        cout << "illegal" << endl;
        return;
    }
    if (count_X - count_0 > 1 || count_X < count_0){
        cout << "illegal" << endl;
        return;
    }
    if (X_win(s)){
 
        if (count_X == count_0) {
            cout << "illegal" << endl;
            return;
        }
        else {
            cout << "the first player won" << endl;
            return;
        }
 
    }
    if (Zeros_win(s)){
        if (count_X > count_0){
            cout << "illegal" << endl;
            return;
        }
        else {
            cout << "the second player won" << endl;
            return;
        }
    }
    if (count_X > count_0){
        if (count_X > count_0 + 1){
            cout << "illegal" << endl;
            return;
        }
    }
    if (count_X == count_0){
        cout << "first" << endl;
        return;
    }
    if (count_0 > count_X){
        cout << "illegal" << endl;
        return;
    }
    if (dot && count_0 == count_X + 1){
        cout << "first" << endl;
        return;
    }
    if (dot && count_X == count_0 + 1){
        cout << "second" << endl;
        return;
    }
        cout << "draw" << endl;
}
 
int32_t main() {
    NeedForSpeed
    int test_cases = 1;
    // freopen("file_name.in" , "r" , stdin);
    // freopen("file_name.out" , "w" , stdout);
 
    // cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}