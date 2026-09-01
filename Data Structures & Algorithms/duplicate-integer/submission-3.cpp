class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> num_map;

        for(int n:nums)
        {
            if(num_map.find(n)!=num_map.end())
                return true;
            
            num_map.insert(n);
        }

        return false;
    }
};