#include <iostream>
#include <vector>
#include <algorithm>
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
        int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (is_sorted(arr.begin(),arr.end())) cout<<"YES\n";
        else if (n>1 && k<2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}