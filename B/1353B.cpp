/*
Two Arrays And Swaps

You are given two arrays a and b both consisting of n positive (greater than zero) integers. You are also given an integer k.

In one move, you can choose two indices i and j (1≤i,j≤n) and swap ai and bj (i.e. ai becomes bj and vice versa). Note that i and j can be equal or different (in particular, swap a2 with b2 or swap a3 and b9 both are acceptable moves).

Your task is to find the maximum possible sum you can obtain in the array a if you can do no more than (i.e. at most) k such moves (swaps).

You have to answer t independent test cases.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int n, k;
        cin >> n;
        cin >> k;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        // cout << "-" << a.size();
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // a.push_back(x);
            a[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // b.push_back(x);
            b[i] = x;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                ans += max(a[i], b[n - i - 1]);
            else
                ans += a[i];
        }
        cout << ans << endl;
        // cout << "-" << t << " " << n << " " << k << endl;
    }
    return 0;
}