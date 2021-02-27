/************************************************************************************************************/
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?
/************************************************************************************************************/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int n=nums.size();
     int ans=0;
        for(int i=0;i<n;i++){
           ans = ans ^ nums[i]; //XOR operator will help us
        }
        return ans;
    }
};
