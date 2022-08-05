#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int answer=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            answer+=2;
            if(i*i==n)
            {
                answer--;
            }
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
    cin>>tt;
    while(tt--)
    {
        //cout<<"case"<<tt<<endl;
        solve();
    }
    return 0;
}
