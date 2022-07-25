#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define MOD (int)1000000007
void solve()
{
    int n;
    cin>>n;
    long long int dp[n+1][n+1];
    char inp[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>inp[i][j];
            dp[i][j]=0;
        }
    }
    if(inp[0][0]!='*')
    {
        dp[0][0]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   
            if(inp[i][j]=='*')
            {
                continue;
            }
            if(i>=1)
            {
                dp[i][j]+=dp[i-1][j];
            }
            if(j>=1)
            {
                dp[i][j]+=dp[i][j-1];
            }
            // cout<<dp[i][j];
            dp[i][j]=dp[i][j]%MOD;
        } 
        {
            // cout<<endl;
        }  
    }
    cout<<dp[n-1][n-1]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    //freopen("name.in", "r", stdin);
    //freopen("name.out", "w", stdout);
    int tt=1;
    //cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}
