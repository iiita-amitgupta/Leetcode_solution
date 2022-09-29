class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod = 1;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                prod *= nums[i];
                
            }else{
                count += 1;
            }
        }
        // if(count == nums.size()) prod = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count != 0){
                if(nums[i] == 0 && count == 1){
                    nums[i] = prod;
                }else{
                    nums[i] = 0;
                }
            }else{
                nums[i] = prod/nums[i];
            }
        }
        return nums;
    }
};