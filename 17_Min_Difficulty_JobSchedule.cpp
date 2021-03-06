class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        vector<int> job;
        job=jobDifficulty;
        
        int n=jobDifficulty.size();
        if(d>n)
            return -1;
        vector<vector<int>> dp(d, vector<int>(n));
        dp[0][0]=job[0];
        for(int i=1;i<n;i++){
            if(job[i]<dp[0][i-1]){
                dp[0][i]=dp[0][i-1];
            }
            else{
                dp[0][i]=job[i];
            }
                
        }
        for(int i=1;i<d;i++){
            for(int j=i;j<n;j++){
                int max=job[j];
                dp[i][j]=INT_MAX;
                for(int k=j;k>=i;k--){
                    if(job[k]>max){
                        max=job[k];
                    }
                    int current = max+dp[i-1][k-1];
                    if(current<dp[i][j])
                        dp[i][j]=current;
                }
            }
        }
        return dp[d-1][n-1];
    }
};
