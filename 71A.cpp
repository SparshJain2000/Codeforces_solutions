#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.length() > 10)
            s.replace(1, s.length() - 2, to_string(s.length() - 2));
        cout << s << endl;
    }
}