class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string first_str = strs[0];

        for(int i=1;i<strs.size();i++) {
                int n = min(first_str.length(), strs[i].length());
                int j=0;

                while(j<n)
                 {
                    if(first_str[j]!=strs[i][j])
                         break;
                    j++;
                 }      

            first_str = first_str.substr(0,j);      
        }

        return first_str;
    }
};