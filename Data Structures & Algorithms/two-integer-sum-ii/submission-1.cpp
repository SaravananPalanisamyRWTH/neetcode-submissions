class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r = numbers.size()-1;

        while(l<r) {
            int temp_sum = numbers[l]+numbers[r];

            if(temp_sum==target)
                return {l+1,r+1};
            
            if(temp_sum<target)
                l++;
            else
                r--;
        }

        return {-1,-1};
    }
};
