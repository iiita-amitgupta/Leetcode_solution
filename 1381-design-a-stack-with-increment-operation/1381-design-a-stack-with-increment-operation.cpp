class CustomStack {
    int max = 0;
    vector<int> v;
public:
    CustomStack(int maxSize) {
        max = maxSize;
    }
    
    void push(int x) {
        if(v.size() < max){
            v.push_back(x);
        }
    }
    
    int pop() {
        if(v.size() == 0){
            return -1;
        }
        int ans = v.back();
        v.pop_back();
        return ans;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < v.size() && k > 0; k--, i++){
            v[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */