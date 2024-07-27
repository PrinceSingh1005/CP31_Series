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
        int n;
        cin>>n;
        if ((n-1) % 3==0 || (n+1) % 3 == 0) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}