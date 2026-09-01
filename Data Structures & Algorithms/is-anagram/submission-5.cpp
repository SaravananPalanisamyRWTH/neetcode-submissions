class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        std::unordered_map<char,int> setA;
        std::unordered_map<char,int> setB;
        int n = s.length();

        for(int i=0; i<n; i++)
        {
            setA[s[i]]++;
            setB[t[i]]++;
        }

        return setA==setB;
    }
};
