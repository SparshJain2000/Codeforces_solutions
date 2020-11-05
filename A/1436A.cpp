/*
A. Reorder
For a given array a consisting of n integers and a given integer m find if it is possible to reorder elements of the array a in such a way that ∑ni=1∑nj=iajj equals m? It is forbidden to delete elements as well as insert new elements. Please note that no rounding occurs during division, for example, 52=2.5.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        int sum = 0;

        for (int i : v)
            sum += i;
        // cout << sum << endl;
        if (sum == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}