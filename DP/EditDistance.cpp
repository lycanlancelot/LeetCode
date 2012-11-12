class Solution {
public:
   
    int minDistance(string word1, string word2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int l1=word1.size();
        int l2=word2.size();
        int dp[l1+1][l2+1];
        memset(dp,100,sizeof(dp));
        
        for(int i=0;i<=l1;i++)
        dp[i][0]=i;
        for(int i=0;i<=l2;i++)
        dp[0][i]=i;
        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {
                dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1-(word1[i-1]==word2[j-1]?1:0));
            }
        }
        return dp[l1][l2];
    }
};