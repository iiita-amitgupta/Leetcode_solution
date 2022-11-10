class Solution {
public:
    int maximalSquare(vector<vector<char>>& v) {
         int c=0;
     vector<vector<int>> dp(v.size()+1, vector<int>(v[0].size()+1,0));
     int mx=INT_MIN;
      for(int i=1;i<=v.size();i++)
      {
          for(int j=1;j<=v[0].size();j++)
          {
              if(v[i-1][j-1]=='1')
              {
                dp[i][j]= 1 + min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});

              }
              else
              {
                  dp[i][j]=0;
              }
            //   c+=dp[i][j];
            mx=max(mx,dp[i][j]);
          }
      }
      return mx*mx;
    }
};