//week06-3.cpp 學習計畫 Simulation 第2題
//Leetcode 657
//機器人 往上u 往下D 往左L 往右R 問是否回到原位
class Solution{
public:
    bool judgeCircle(string moves){
        //程式在中間 上面3行不要動 下面2行不要動
        int x = 0 , y = 0;
        for (char c : moves) { //week02教string 及 C++ 進階for迴圈
            if ( c == 'U') y++;
            if ( c == 'D') y--;
            if ( c == 'L') x--;
            if ( c == 'R') x++;
        }
        if ( x == 0 && y == 0 ) return true;
        else return false;
    }
};
