///week03-1.cpp
///leetcode 1822
///倒c++皚nums,р┮Τ计常癬ㄓ タ1 璽-1 逞常琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
    int neg = 0;///璽计Τ碭?癹伴玡秨﹍0
    for(int num : nums){
            if (num == 0) return 0;///Τ0癬ㄓ琌0
            if (num < 0) ++neg;///笿璽计
    }
    if (neg%2==0) return 1;///Τ案计璽计璽璽眔タ
    return -1;///璽
    }
};
