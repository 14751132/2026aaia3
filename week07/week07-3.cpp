//week07-3.cpp 學習計畫 Simulation 第4題
// leetcode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d = 0;//d是 0:北 ; 1:東 ; 2:南 ; 3:西
        for (char c : instructions) {
            if (c == 'R') d = (d+1) % 4; //向右轉
            if (c == 'L') d = (d-1+4) % 4; // 向左轉
            if (c == 'G') {//前進
                if (d == 0) y++;//北
                if (d == 1) x++;//東
                if (d == 2) y--;//南
                if (d == 3) x--;//西
            }
        }
        //指令走完 離開迴圈 要檢查 (1) 方向有改,一定4次繞圈圈 (2) 回到原來的位置, 1次就繞回來
        if (x == 0 && y == 0) return true;
        if (d != 0) return true;
        return false;
    }
};
