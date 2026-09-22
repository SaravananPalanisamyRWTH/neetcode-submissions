class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        int j = nums.size();
        unordered_set<int> win;
        for(int j=0;j<nums.size();j++) {
            if(j-i > k) {
                win.erase(nums[i]);
                i++;
            }

            if(win.contains(nums[j]))
                return true;
            win.insert(nums[j]);
        }        

        return false;

    }
};