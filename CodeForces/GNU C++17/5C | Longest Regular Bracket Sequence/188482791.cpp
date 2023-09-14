#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int long long
#define lll __int128
#define endl '\n'
const long long INF = 1ll << 32;
const long double PI = acos(-1);
const int N = 1000001, Mod = 1000000007 , inf = 1e9 , bits = 27;
const int NN = 1e9 , OO = 0x3F3F3F3F;
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(0),cout.tie(0);
void solve () {
   string s;
   cin >> s;
   int n = s.size();
   map < int , int > mp;
   stack < pair < char , int > > st;
   mp[0] = 1;
   vector < int > a(s.size());
   for (int i = 0;i < s.size(); i++){
       if (s[i] == ')' && !st.empty() && st.top().first == '('){
           a[st.top().second] = i;
           st.pop();
       }
       else
           st.push({s[i] , i});
   }
   int cnt {};
   for (int i = 0; i < a.size(); i++){
       if (a[i]){
           cnt += a[i] - i + 1;
           mp[cnt] ++;
           i = a[i];
       }
       else cnt = 0;
   }
   auto it = mp.end();
   it --;
   cout << it -> first << " "<< it -> second << endl;
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