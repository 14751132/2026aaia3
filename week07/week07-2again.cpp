//week07-2again.cpp 學習計畫 Simulation 第3題
//1275. Find Winner on a Tic Tac Toe Game
class Solution {
public://大資料結構 moves 裡面放 中資料結構 move 裡面放 小資料結構int 的 i,j
    string tictactoe(vector<vector<int>>& moves) {
        int who = 1;
        int winner = 0;
        string whoTable[3] = {"Draw", "A", "B"};
        int a[3][3] = {0};
        for (auto move : moves){
            int i = move[0], j = move[1];
            a[i][j] = who;
            if( a[i][0] == who && a[i][1] == who && a[i][2] == who ) winner = who;
            if( a[0][j] == who && a[1][j] == who && a[2][j] == who ) winner = who;
            if( a[0][0] == who && a[1][1] == who && a[2][2] == who ) winner = who;
            if( a[2][0] == who && a[1][1] == who && a[0][2] == who ) winner = who;
            if (winner == 1)return "A";
            if (winner == 2)return "B";
            who = 3 - who; //稍早 who 是 1, 3-1得2 ;稍早 who 是2, 3-2得1
        }
        if (moves.size() == 9)return "Draw";
        else return "Pending";
    }
};
