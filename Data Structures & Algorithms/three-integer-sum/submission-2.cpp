class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> res;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = n-1;
            int cur_sum = nums[i];
            while(l<r) {
              int tot_sum = cur_sum+nums[l]+nums[r];

                if(tot_sum==0)
                {
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1])
                        l++;
                } else if(tot_sum<0) {
                    l++;
                } else
                    r--;
            }
        }

        return res;
    }
};
