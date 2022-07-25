#include<bits/stdc++.h>
#define endl '\n'
#define MOD (int)1000000007
using namespace std;
void solve()
{
    string s;
    cin>>s;
    vector<int>pal(26);
    for(auto a:s)
    {
        pal[a-'A']++;
    }
    string ans;
    int cnt=0;
    for(int i=0;i<26;i++)
    {
        if(pal[i]%2)
        {
            cnt++;
            if(cnt>1)
            {
                cout<<"NO SOLUTION"<<endl;
                return ;
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        if(!(pal[i]%2))
        {
            for(int j=0;j<pal[i]/2;j++)
            {
                ans.push_back(i+'A');
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        if(pal[i]%2)
        {
            for(int j=0;j<pal[i];j++)
            {
                ans.push_back(i+'A');
            }
        }
    }
    for(int i=25;i>=0;i--)
    {
        if(!(pal[i]%2))
        {
            for(int j=0;j<pal[i]/2;j++)
            {
                ans.push_back(i+'A');
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int tt=1;
    while(tt--)
    {
        solve();
    }
    return 0;
}
