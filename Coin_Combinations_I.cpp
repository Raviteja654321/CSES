#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n,req;
    cin>>n>>req;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long int>cnt(req+1);
    cnt[0]=1;
    for(int i=1;i<=req;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=a[j])
            {
                cnt[i]+=cnt[i-a[j]];
            }
        }
        cnt[i]=cnt[i]%(1000000007);
    }
    cout<<cnt[req]<<endl;
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