/*
Multiply by 2, divide by 6

You are given an integer n. In one move, you can either multiply n by two or divide n by 6 (if it is divisible by 6 without the remainder).

Your task is to find the minimum number of moves needed to obtain 1 from n or determine if it's impossible to do that.

You have to answer t independent test cases.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("../output.txt");
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f2 = 0, f3 = 0;
        int ans = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            f2++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            f3++;
        }
        if (n != 1 || f2 > f3)
            ans = -1;
        else
            ans = f3 + (f3 - f2);
        fout << ans;
        fout << "\n";
    }
    fout.close();
}