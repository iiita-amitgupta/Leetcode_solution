class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int curr_sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(curr_sum + nums[i] > nums[i]){
                curr_sum += nums[i];
            }else{
                curr_sum = nums[i];
            }
            if(curr_sum > sum) sum = curr_sum;
        }
        return sum;
    }
};