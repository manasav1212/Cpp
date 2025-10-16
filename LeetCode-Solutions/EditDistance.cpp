//Problem: https://leetcode.com/problems/edit-distance/description/?envType=problem-list-v2&envId=dynamic-programming

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1,INT_MAX));
        dp[0][0] = 0;
        for(int j=0;j<=n;j++)
        {
            dp[0][j] = j;
        }
        for(int i=0;i<=m;i++)
        {
            dp[i][0] = i;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j =1;j<=n;j++)
            {
                int prev = min(dp[i-1][j]+1, dp[i][j-1]+1);
                int IR;
                if(word1[i-1]==word2[j-1])
                    IR = 0;
                else
                    IR = 1;
                int val = min(prev, dp[i-1][j-1]+IR);
                dp[i][j] = min(dp[i][j], val);
            }
        }
        return dp[m][n];
    }
};