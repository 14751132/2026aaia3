///week02-3.cpp 學習計畫 Basic 第一題
///LeetCode 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string a, string b) {
        int N1 = a.length(), N2= b.length();
        string ans;
        for(int i=0; i<max(N1,N2);++i){
            if(i< N1) ans+=a[i];
            if(i< N2) ans+=b[i];
        }
        return ans;
    }
};
