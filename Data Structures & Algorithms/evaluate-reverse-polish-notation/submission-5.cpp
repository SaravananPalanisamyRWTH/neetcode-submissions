class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(const string& s: tokens) {

            if(s=="/") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                if(second!=0)
                    st.push(first/second);
                continue;
            }
            
            if(s=="*") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first*second);
                continue;
            }

            if(s=="+") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first+second);
                continue;
            }

            if(s=="-") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first-second);
                continue;
            }
            st.push(stoi(s));
        }
 
    return st.top();
    }
};
