class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum=0;

        for(string op: operations) {
            if(op=="C" && !st.empty()) {
                st.pop();
                continue;
            }

            if(op=="D" && !st.empty()) {
                int d = (st.top());
                st.push(2*d);
                continue;
            }
            
            if(op=="+" && st.size()>=2){
                int second = (st.top());
                st.pop();
                int first = (st.top());
                st.pop();

                st.push(first);
                st.push(second);
                st.push(first+second);
                continue;
            }
            st.push(stoi(op));

        }

        while(!st.empty()) {
            sum+=st.top();
            st.pop();
        }

        return sum;

    }
};