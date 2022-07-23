#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int some(int n)
{
    int maxi=-1;
    while(n>0)
    {
        maxi=max(maxi,n%10);
        n/=10;
    }
    return maxi;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>dp(n+2);
    dp[0]=0;
    for(int i=1;i<=9;i++)
    {
        dp[i]=1;
    }
    for(int i=10;i<=n;i++)
    {
        dp[i]=1+dp[i-some(i)];
    }
    cout<<dp[n]<<endl;
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
