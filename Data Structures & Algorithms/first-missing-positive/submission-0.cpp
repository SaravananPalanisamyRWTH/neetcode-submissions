class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains = false;
        for(int i=0;i<n;i++) {
            if(nums[i]>n || nums[i]<=0 )
                nums[i]=n+1;
        }



        for(int i=0;i<nums.size();i++) {
            int num = abs(nums[i]);

            if(num>n)
                continue;

            --num;
            if(nums[num]>0)
            nums[num]=-nums[num];
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                return i+1;
        }

        return n+1;
    }
};