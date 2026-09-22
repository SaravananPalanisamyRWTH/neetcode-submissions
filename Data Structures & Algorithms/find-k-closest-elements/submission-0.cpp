class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            using pair = pair<int,int>;

            auto comp = [=](pair a, pair b) {
                if(a.second==b.second)
                    return a.first>b.first;
                return a.second > b.second;
            };
            priority_queue<pair,vector<pair>, decltype(comp)> pq(comp);

            for(int i: arr) {
                pq.push({i, abs(i-x)});
            }
            vector<int> res;
            for(int i=0;i<k && !pq.empty();i++) {
                auto top = pq.top();
                res.push_back(top.first);
                pq.pop();
            }
            sort(res.begin(),res.end());
            return res;
    }
};