class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
   
        for(int i=0;i<nums.size();i++)
        {
            int second_num = target-nums[i];
            if(hash.find(second_num)!=hash.end())
                return {hash[second_num],i};

            hash[nums[i]]=i;
        }

        return {-1,-1};

    }
};
