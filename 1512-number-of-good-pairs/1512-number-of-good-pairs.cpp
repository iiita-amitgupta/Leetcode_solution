class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        int goodPairs = 0;
        
        for(int i=0; i<nums.size(); i++)
            hashmap[nums[i]] += 1;
        
        for(auto element : hashmap)
            goodPairs += element.second * (element.second - 1) / 2;
        
        return goodPairs;
    }
};