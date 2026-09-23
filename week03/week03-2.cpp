///week03-2.cpp
///leetcode 283
///把0移到右邊去，等於不是放0的左邊再補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;///目標在哪裡nums[k]
        for(int num : nums){///c++進階for 迴圈
            if(num != 0){///把不是0的，都移到左邊
                nums[k] = num;///把數字放左邊
                k++;///換下一格
        }///把殘留的都變成0
        for(int i=k; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};
