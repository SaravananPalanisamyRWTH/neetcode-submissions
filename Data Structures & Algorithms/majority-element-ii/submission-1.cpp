class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maj1=0;
        int maj2=0;
        int count1=0;
        int count2=0;

        for(int i=0;i<nums.size();i++) {
if(maj1==nums[i]){
                count1++;
            } else if(maj2==nums[i]) {
                count2++;
            } else
            if(count1==0)
            {
                maj1 = nums[i];
                count1++;
            } else if(count2==0)
            {
                maj2 = nums[i];
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        count1=count2=0;
        if(nums.size()<=1) return {nums};
        for(int num: nums)
            if(num==maj1) count1++;
            else if(num==maj2)  count2++;

        vector<int> res;

        if(count1>nums.size()/3) res.push_back(maj1);
        if(count2>nums.size()/3) res.push_back(maj2);
        return res;
    }
};