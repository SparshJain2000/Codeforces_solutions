/*
Construct the String

You are given three positive integers n, a and b. You have to construct a string s of length n consisting of lowercase Latin letters such that each substring of length a has exactly b distinct letters. It is guaranteed that the answer exists.

You have to answer t independent test cases.

Recall that the substring s[l…r] is the string sl,sl+1,…,sr and its length is r−l+1. In this problem you are only interested in substrings of length a.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            cout << char('a' + i % b);
        }
        cout << endl;
    }
}