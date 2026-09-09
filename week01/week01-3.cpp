///week01-3.cpp 學習計畫 Basic 第3題
///LeetCode 28. Find the Index of the First Occurrence in a String
///大海撈針
class Solution {
public:
    int strStr(string haystack, string needle) {
        int N1 = haystack.length(), N2 = needle.length();
        ///字串長度 .length()
        for(int i=0; i<= N1-N2 ; i++){///loop
            if( haystack.substr(i,N2) == needle ) return i;///找到答案
            ///如果 大字串 的 .substr(開始,長度) 等於 小字串, 答案
        }
        return -1;///找不到
    }
};
