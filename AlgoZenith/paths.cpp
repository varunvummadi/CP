#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll  = long long;
void solve()
{
	ll n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m)),b(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    if(a[0][0]==1 || a[n-1][m-1]==1)
    {
        cout<<0<<"\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][0]==1)
        {
            break;
        }
        b[i][0]=1;
    }
    for(int i=0;i<m;i++)
    {
        if(a[0][i]==1)
        {
            break;
        }
        b[0][i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]==1)
            {
                continue;
			}
            b[i][j]=b[i-1][j]+b[i][j-1];
            b[i][j]%=mod;
        }
    }
    cout<<b[n-1][m-1]<<"\n";
}
signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif
       long _t;cin>>_t;while(_t--)
	solve();
    return 0;
}