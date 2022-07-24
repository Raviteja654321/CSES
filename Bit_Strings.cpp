#include<bits/stdc++.h>
#define endl '\n'
#define MOD (int)1000000007
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    long long int answer=1;
    while(n--)
    {
        answer*=2;
        answer=answer%MOD;
    }
    cout<<answer<<endl;
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
