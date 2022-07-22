#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define MOD 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<long long int>dp(n+2);
    for(long long int i=1;i<=n;i++)
    {
        long long int temp=i;
        if(i>6)
        {
            dp[i]+=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6]);
        }
        else 
        {
            dp[i]+=1;
            while(temp--)
            {
                dp[i]+=dp[temp];
            }
        }
        dp[i]=dp[i]%(MOD);
    }
    cout<<dp[n]%(MOD)<<endl;
    return ;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    //freopen("name.in", "r", stdin);
    //freopen("name.out", "w", stdout);
    int tt=1;
    // cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}
