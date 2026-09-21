class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        using pair = pair<int,int>;

        auto comp = [](pair a, pair b) {
            return a.second < b.second;
        };
        unordered_map<int,int> hash;
        priority_queue<pair, vector<pair>, decltype(comp)> pq(comp);

        for(int n:nums) {
            hash[n]++;
        }

        for(auto pair: hash)
            pq.push(pair);

        vector<int> result;

        
        for(int i=0; i<k && !pq.empty(); i++) {
            auto [key,val] = pq.top();
            result.push_back(key);
            pq.pop();
        }

        return result;
        
    }
};
