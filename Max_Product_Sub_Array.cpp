/***********************************************************************/
//Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.
/***********************************************************************/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        int max_product=1;
        int min_product=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                int temp = max_product;
                max_product = min_product;
                min_product = temp;
            }
            max_product = max_product*nums[i];
            if(max_product<nums[i])
                max_product = nums[i];
            min_product = min_product*nums[i];
            if(min_product>nums[i])
                min_product=nums[i];
            if(ans<max_product)
                ans=max_product;
        }
        return ans;
    }
};
