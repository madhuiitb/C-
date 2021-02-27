/*********************************************/
//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
/*********************************************/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_till = nums[0];
        int current_max=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            current_max = current_max + nums[i];
            if(current_max<nums[i])
                current_max=nums[i];
            if(max_till<current_max){
                max_till=current_max;
            }
        }
        return max_till;
    }
};
