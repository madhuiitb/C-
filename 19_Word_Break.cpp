class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n =s.size();
        unordered_set<string> word(wordDict.begin(), wordDict.end());
        vector<int> dp(n+1,0);
        dp[n]=1;
        
        for(int i=n-1;i>=0;i--)
        {
            string str="";
            for(int j=i;j<n;j++)
            {
                str = str + s[j];
                if(word.find(str)!=word.end())
                {
                    if(dp[j+1]==1)
                    {
                        dp[i]=1;
                    }
                }
            }
        }
        return dp[0];
    }
};
