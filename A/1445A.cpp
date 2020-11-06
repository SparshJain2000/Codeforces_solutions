/*
Array Rearrangment
You are given two arrays a and b, each consisting of n positive integers, and an integer x. Please determine if one can rearrange the elements of b so that ai+bi≤x holds for each i (1≤i≤n).
*/

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d%d", &n, &x);
        vi a(n);
        vi b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + b[n - i - 1] > x)
            {
                ans = true;
                break;
            }
        }
        if (ans)
            printf("No\n");
        else
            printf("Yes\n");
    }
}