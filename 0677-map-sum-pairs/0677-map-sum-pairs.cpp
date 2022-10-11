class MapSum {
private:
    map<string, int> mp;
public:
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key] = val;
    }
    
    int sum(string prefix) {
        int sum = 0;
        for (auto itr = mp.lower_bound(prefix); itr != mp.end() && itr->first.compare(0, prefix.size(), prefix) == 0; ++itr)
        {
            sum += itr->second;
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */