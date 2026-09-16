///week02-4.cpp Basic ²Ä2ÃD
///LeetCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {}
        for (char c : s) {
            H[c-'a'] += 1;
        }
        for (char c : t) {
            H[c-'a'] -= 1;
            if (H[c-'a']<0)
                return c;
        }
        return 0;
    }
};
