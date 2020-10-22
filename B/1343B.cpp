/*
Balanced Array

You are given a positive integer n, it is guaranteed that n is even (i.e. divisible by 2).

You want to construct the array a of length n such that:

The first n2 elements of a are even (divisible by 2);
the second n2 elements of a are odd (not divisible by 2);
all elements of a are distinct and positive;
the sum of the first half equals to the sum of the second half (∑i=1n2ai=∑i=n2+1nai).
If there are multiple answers, you can print any. It is not guaranteed that the answer exists.

You have to answer t independent test cases.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if ((x / 2) % 2)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int sum = 0;
            for (int i = 2; i <= x; i += 2)
            {
                cout << i << " ";
                sum += i;
            }
            for (int i = 1; i < x - 2; i += 2)
            {
                cout << i << " ";
                sum -= i;
            }
            cout << sum << endl;
        }
    }
}