class Solution {
	public:
		int CountWays(string s){
		int n = s.length(); int mod = 1e9 + 7;
        vector<int> dp(n+1,0);
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]!='0') dp[i] +=dp[i+1];
            if(i+1<n && (s[i] == '1' || s[i] == '2' && s[i+1] <= '6'))
                dp[i] = (dp[i] + dp[i+2])%mod;
        }
        return dp[0];
		}
};
