class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> win;
        int l=0;
        int max_len = 0;
        for(int r=0; r<s.length();r++) {
            while(win.contains(s[r])) {
                win.erase(s[l]);
                l++;
            }
            win.insert(s[r]);
            max_len = max(max_len, r-l+1);
        }
        return max_len;
    }
};
