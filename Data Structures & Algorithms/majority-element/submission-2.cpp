class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=0;
        int key=0;

        for(int i=0;i<nums.size(); i++) {
            if(majority==0)
                key=nums[i];

            if(nums[i]==key)
            {
                majority++;
            } else majority--;
        }

        return key;



    }
};