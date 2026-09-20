class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;

        for(auto str: strs) 
        {
            std::string res = str;
            sort(res.begin(), res.end());
            hash[res].push_back(str);
        }

        vector<vector<string>> result;

        for(auto [key, val]: hash)
        {
            result.push_back(val);
        }

        return result;
    }
};
