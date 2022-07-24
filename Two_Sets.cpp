#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    if((n*(n+1)/2)%2)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
        long long int sum=n*(n+1)/4;
        vector<long long int>a1;
        vector<long long int>a2;
        while(n)
        {
            if(sum-n>=0)
            {
                a1.push_back(n);
                sum-=n;
            }
            else 
            {
                a2.push_back(n);
            }
            n--;
        }
        cout<<a1.size()<<endl;
        for(auto s:a1)
        {
            cout<<s<<" ";
        }
        cout<<endl;
        cout<<a2.size()<<endl;
        for(auto s:a2)
        {
            cout<<s<<" ";
        }
        cout<<endl;
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
