class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left_iter=0;
        int right_iter=nums.size()-1;


        int curr_iter = 0;

        while(curr_iter<=right_iter) {
            if(nums[curr_iter]==0)
            {
                swap(nums[curr_iter],nums[left_iter]);
                left_iter++;
                curr_iter++;
            } else if(nums[curr_iter]==2)
            {
                swap(nums[curr_iter],nums[right_iter]);
                right_iter--;
            } else
                curr_iter++;
        }
    }
};