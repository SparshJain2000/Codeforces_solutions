/*
Reverse Binary Strings
You are given a string s of even length n. String s is binary, in other words, consists only of 0's and 1's.

String s has exactly n2 zeroes and n2 ones (n is even).

In one operation you can reverse any substring of s . A substring of a string is a contiguous subsequence of that string.

What is the minimum number of operations you need to make string s alternating? A string is alternating if si≠si+1 for all i. There are two types of alternating strings in general: 01010101... or 10101010...
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int len = 0;
        scanf("%d", &len);
        string s;
        cin >> s;
        string s1 = "1" + s + "0";
        string s2 = "0" + s + "1";

        int m1 = 0, m2 = 0, i = 0;
        while (i + 1 < s1.length())
            while (i + 1 < s1.length() && s1[i] == s1[++i])
                m1++;

        i = 0;
        while (i + 1 < s2.length())
            while (i + 1 < s2.length() && s2[i] == s2[++i])
                m2++;

        // cout << m1 << " " << m2 << endl;
        printf("%d\n", min(m1 / 2, m2 / 2));
    }
}