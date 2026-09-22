class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int res=r;
        while(l<=r) {
            int ban = (l + r)/2;

            long long hours=0;
            for(int p : piles) {
               hours+= ceil(static_cast<double>(p)/ban);
            }


            if(hours<=h){
                res = ban;
                r = ban-1;
            } else
                l = ban+1;
        }

        return res;

    }
};
