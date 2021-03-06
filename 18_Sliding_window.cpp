class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> result;
        
        for(int i=0;i<=n-k;i++)
        {
            int max=INT_MIN;
            for(int j=i;j<k+i;j++)
            {
                if(max<nums[j])
                {
                    max=nums[j];
                }
            }
            result.push_back(max);
        }
        return result;
    }
    
};
