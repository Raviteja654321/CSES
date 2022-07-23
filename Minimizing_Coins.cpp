#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int sol(vector<int>&dp,vector<int>&a,int req)
{
    if(req<0)
    {
        return (int)100000007;
    }
    else if(req==0)
    {
        dp[0]=0;
    }
    if(dp[req]!=-1)
    {
        return dp[req];
    }
    int n=a.size();
    int mini=(int)1000000007;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,1+sol(dp,a,req-a[i]));
    }
    dp[req]=mini;
    return mini;
}
void solve()
{
    int n,req;
    cin>>n>>req;
    vector<int>dp(req+1,-1);
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int answer=sol(dp,a,req);
    if(answer>100000007)
    {
        cout<<"-1"<<endl;
    }
    else 
    {
        cout<<answer<<endl;
    }
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
