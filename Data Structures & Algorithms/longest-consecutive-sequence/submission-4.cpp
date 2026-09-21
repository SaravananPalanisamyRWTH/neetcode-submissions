class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
                unordered_set<int> hash;

        for(int n:nums)
            hash.insert(n);

        int max_len=0;
        
        for(int n:nums)
        {
            if(!hash.contains(n-1))
            {
            int count=1;
            while(hash.contains(n+1))
            {
                count++;
                n=n+1;
            }
            max_len = max(count,max_len);
            }
        }

            return max_len;
    }
};
