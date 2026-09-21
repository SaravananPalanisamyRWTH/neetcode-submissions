class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;

        int max_area = INT_MIN;
        while(left<right) {
            int curr_area = min(heights[right],heights[left]) * (right-left);

            if(heights[right]<heights[left])
                right--;
            else
                left++;

            max_area = max(curr_area, max_area);


        }

        return max_area;
    }
};
