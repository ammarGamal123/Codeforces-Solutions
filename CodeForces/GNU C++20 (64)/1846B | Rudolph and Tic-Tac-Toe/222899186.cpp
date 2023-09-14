#include <bits/stdc++.h>
using namespace std;
#define int  unsigned long long
#define endl '\n'
#define ll long long
#define NeedForSpeed ios_base::sync_with_stdio(false) , cin.tie(nullptr), cout.tie(nullptr);
 
bool checkWin(const vector<string>& board, char symbol) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
            return true;
        }
    }
 
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) {
            return true;
        }
    }
 
    // Check diagonals
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return true;
    }
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return true;
    }
 
    return false;
}
string getWinner(const vector<string>& board) {
    if (checkWin(board, 'X')) {
        return "X";
    }
    if (checkWin(board, 'O')) {
        return "O";
    }
    if (checkWin(board, '+')) {
        return "+";
    }
    return "DRAW";
}
void solve () {
    vector<string> board(3);
    for (int j = 0; j < 3; j++) {
        cin >> board[j];
    }
 
    string winner = getWinner(board);
    cout << winner << endl;
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