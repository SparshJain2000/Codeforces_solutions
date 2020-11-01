/*
01 Game

Alica and Bob are playing a game.

Initially they have a binary string s consisting of only characters 0 and 1.

Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on. During each move, the current player must choose two different adjacent characters of string s and delete them. For example, if s=1011001 then the following moves are possible:

delete s1 and s2: 1011001→11001;
delete s2 and s3: 1011001→11001;
delete s4 and s5: 1011001→10101;
delete s6 and s7: 1011001→10110.
If a player can't make any move, they lose. Both players play optimally. You have to determine if Alice can win.
*/
#include <bits/stdc++.h>
using namespace std;
int count(string s, char c)
{
    int ans = 0;
    for (char ch : s)
    {
        if (ch == c)
            ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (min(count(s, '0'), count(s, '1')) % 2)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
}