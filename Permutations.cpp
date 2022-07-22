#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return ;
    }
    if(n<=3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else 
    {
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
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
