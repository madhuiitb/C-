#Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#You may assume that each input would have exactly one solution, and you may not use the same element twice.
#You can return the answer in any order.

#LeetCode###
#LeetCode###

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        /*******************************************************************/
        //________________________Brute Force_____________________________//
        
      //  vector<int> ret;
      //  for(int i=0; i< nums.size()-1 ;i++){
      //      for(int j=i+1; j< nums.size(); j++){
      //          int tar = nums[i]+nums[j];
      //          if(tar==target)
      //          {
      //              ret.push_back(i);
      //              ret.push_back(j);
      //          }
      //      }
      //  }
      //  return ret;
        
        /*******************************************************************/
        //________________________Linear Approach_________________________//
        
        unordered_map<int, int> set_values;
        vector<int> ret;
        for(int i=0; i< nums.size() ;i++){
                int tar = target - nums[i];
                if(set_values.find(tar)!=set_values.end())
                {
                    ret.push_back(set_values[tar]);
                    ret.push_back(i);
                    return ret;
                }
                else
                {
                    set_values.insert(make_pair(nums[i],i));
                }
        }
        return ret;
    }
};
