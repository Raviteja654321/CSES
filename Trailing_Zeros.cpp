#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    long long int answer=0;
    long long int poww=5;
    while(n/poww!=0)
    {
        answer+=n/poww;
        poww*=5;
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
