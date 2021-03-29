class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int max_distance = 0; //We are at idex 0 and assuming we moved 0 distance till now.
        cout<<n<<endl;
        for(int i=0; i<n && i<=max_distance;i++){
            cout<<"i="<<i<<" ";
            if(max_distance<nums[i]+i){
                cout<<"nums[i]="<<nums[i]<<" ";
                max_distance=nums[i]+i;
            }
            cout<<"max="<<max_distance<<"\n ";
        }
        if(n==1)
            return true;
        return n<=max_distance;
    }
};
