#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n -= 2;
    if (n > 0 && !(n % 2))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}