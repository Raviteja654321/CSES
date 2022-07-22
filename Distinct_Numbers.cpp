#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt=1;
    // cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        set<int>a;
        for(int i=0;i<n;i++)
        {
            int s;
            cin>>s;
            a.insert(s);
        }
        cout<<a.size()<<endl;
    }
}
