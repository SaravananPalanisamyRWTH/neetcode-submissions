class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=0;
        int w2=0;
        int wl1 = word1.length();
        int wl2 = word2.length();

        string result="";
        while(w1<wl1 || w2<wl2) {

            if(w1<wl1)
                result+=word1[w1];
            if(w2<wl2)
                result+=word2[w2];
            
            w1++;
            w2++;
        }

        return result;
    }
};