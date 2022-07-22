#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    string s;
    cin>>s;
    long long int n=s.size();
    int cnt=1;
    char ch=s[0];
    int best=1;
    for(long long int i=1;i<n;i++)
    {
        if(s[i]==ch)
        {
            cnt++;
        }
        else 
        {
            cnt=1;
        }
        ch=s[i];
        best=max(cnt,best);
    }
    cout<<best<<endl;
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
