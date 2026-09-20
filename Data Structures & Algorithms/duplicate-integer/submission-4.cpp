class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> list;
        for(int n: nums) {
            if(list.find(n)!=list.end())
                return true;

            list.insert(n);
        }

        return false;
    }
};