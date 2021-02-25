class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int first_natural_numbers_sum = (n*(n+1))/2;
        int array_elements_sum = 0;
        // we can use auto format here
        // auto array_elements_sum = std::accumulate(nums.begin(), nums.end(), 0);
      
        for(int i=0;i<n;i++){
            array_elements_sum = array_elements_sum + nums[i];
        } // for this for loop it is running in linear time i.e O(n) time
        return first_natural_numbers_sum - array_elements_sum;
    }
};
