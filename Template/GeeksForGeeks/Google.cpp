#include <bits/stdc++.h>
using namespace std;
int solve(string& s)

{
    vector<vector<int>> dp(2);
    dp[0].pb(0);
    dp[1].pb(0);
    int opt = 0;
    for (int i = 0;i<2*s.size()-1;i++){
        dp[0].pb(dp[0].back()+(s[i%s.size()]!=((opt)?'w':'b')));
        dp[1].pb(dp[1].back()+(s[i%s.size()]!=((opt)?'b':'w')));
        opt = 1 - opt;
    }
    int ans = INT_MAX;
    int n = s.size();
    for (int i = n;i<dp[0].size();i++){
        ans = min(ans, dp[0][i] - dp[0][i - n]);
        ans = min(ans, dp[1][i] - dp[1][i - n]);
    }
    return ans;
}
int main(int argc, char *argv[])
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--){
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}