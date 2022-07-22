#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    vector<long long int>a(n);
    long long int answer=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            answer+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<answer<<endl;
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
