class FreqStack {
    unordered_map<int,int> hash;
    unordered_map<int,stack<int>> freq_map;
    int curr_highest = 0;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        hash[val]++;
        curr_highest = max(hash[val],curr_highest);
        freq_map[hash[val]].push(val);
    }
    
    int pop() {
        int res = freq_map[curr_highest].top();
        freq_map[curr_highest].pop();
        hash[res]--;

        if(freq_map[curr_highest].empty())
            curr_highest--;
        return res;

    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */