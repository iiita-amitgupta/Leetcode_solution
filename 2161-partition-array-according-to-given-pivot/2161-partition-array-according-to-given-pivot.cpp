class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int countPivot=0;
        vector<int> greater;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot) res.push_back(nums[i]);
            else if(nums[i]>pivot) greater.push_back(nums[i]);
            else countPivot++;
        }
        for(int i=0; i<countPivot; i++) res.push_back(pivot);
        for(int i=0; i<greater.size(); i++) res.push_back(greater[i]);
        return res;
    }
};