///week05-2.cpp 學習計畫 Built-in Function 第2題
///Leetcode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i<s.length(); i++) {
            /// if (s[i]>='A' && s[i]<='Z') s[i] = s[i] -'A' +'a';
            /// if ( issupper(s[i])) s[i] = s[i] - 'A' + 'a';
            s[i] = tolower(s[i]);///#include <cctype>
        }
        return s;
    }
};
