///week09-1a.cpp 學習計畫 Matrix 第2題
///矩陣, 希望把兩條對角線上面的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); ///矩陣的大小
        int ans = 0;
        for (int i=0; i<N; i++){ //法2:兩層迴圈
            ans += mat[i][i];
        }
        for (int i=0; i<N; i++){
            ans += mat[N-1-i][i];
        }
        if (N%2 == 1)ans -= mat[N/2][N/2];
        return ans;
    }
};
