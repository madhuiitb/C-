class Solution {
public:
    bool two_sum_exits(vector<int>& A, int val){
      /***** BRUTE FORCE APPROACH *******/
    //  int n = A.size();
     // for(int =0;i<n-1;i++){
       // for(int j=i+1; j<n;j++){
         // if(val == (A[i]+A[j]){
           // return true;
          //}
       // }
      // }
      // return false;
             
        /***** Linear Approach *******/
      /***** Linear Approach *******/
      unordered_set<int> set_values;
      for(int& i : A){
        if(set_values.find(val-i)!=set_values.end()){
          return true;
        }
        set_values.insert(i);
      }
      return false;
    }
};
