class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int sum2 = 0;
        for(int i = 0; i < nums.size(); i++){
            sum2 += nums[i];
            sum += i+1;
        }
        return sum - sum2;
    }
};