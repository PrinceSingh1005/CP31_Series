#include<iostream>
#include <vector>
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
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mn = arr[0];
        for (int i=0;i<n-1;i++){
            mn = max(mn,arr[i+1]-arr[i]);
        }
        mn = max(mn, 2*(x-arr[n-1]));
        cout<<mn<<endl;
    }
    return 0;
}