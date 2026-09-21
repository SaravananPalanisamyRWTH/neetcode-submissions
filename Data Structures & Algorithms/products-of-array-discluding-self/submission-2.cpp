class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int n = nums.size();
          vector<int> prefix(n,1);
          vector<int> right(n,1);
          vector<int> result(n);


          for(int i=1;i<n;i++)
          {
            prefix[i] = nums[i-1] * prefix[i-1];
          }

          for(int j=n-2;j>=0;j--) 
          {
            right[j] = nums[j+1] * right[j+1];
          }


          for(int i=0;i<n;i++)
          {
            result[i] = prefix[i]*right[i];
          }

          return result;
    }
};
