/*
Barrels
You have n barrels lined up in a row, numbered from left to right from one. Initially, the i-th barrel contains ai liters of water.

You can pour water from one barrel to another. In one act of pouring, you can choose two different barrels x and y (the x-th barrel shouldn't be empty) and pour any possible amount of water from barrel x to barrel y (possibly, all water). You may assume that barrels have infinite capacity, so you can pour any amount of water in each of them.

Calculate the maximum possible difference between the maximum and the minimum amount of water in the barrels, if you can pour water at most k times.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        long long int ans = 0;
        for (int i = n - k - 1; i < n; i++)
            ans += v[i];
        cout << ans << endl;
    }
}