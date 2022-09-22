class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        bool ans = false;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()) return true;
            mp[nums[i]] = i;
        }
        return ans;
    }
};