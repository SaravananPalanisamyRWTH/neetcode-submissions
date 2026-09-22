class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_count=INT_MAX;

        int left=0;
        int curr_sum=0;
        for(int right=0;right<nums.size();right++) {
            curr_sum+=nums[right];

               while(curr_sum>=target)
               {
                   min_count = min(min_count, right-left+1);

                    curr_sum-=nums[left];
                    left++;
               } 
    
        }

        return min_count==INT_MAX? 0: min_count;
    }
};