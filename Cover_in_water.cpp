#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        int n,x=0,mx=0,p=0;
        cin>>n;
        string s;
        cin>>s;
        for (char &c: s){
            if (c=='.') {
                x++;
                p++;
            }
            else x=0;
            mx = max(mx,x);
        }
        if (mx>=3) cout<<2<<"\n";
        else cout<<p<<"\n";
    }
    return 0;
}