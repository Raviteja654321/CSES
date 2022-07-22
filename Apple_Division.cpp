#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && a[i]<=a[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            st.push(i);
            cout<<"0 ";
        }
        else 
        {
            cout<<st.top()+1<<" ";
            st.push(i);
        }
    }
    cout<<endl;
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
