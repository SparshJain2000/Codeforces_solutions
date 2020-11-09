/*Prime Square
Sasha likes investigating different math objects, for example, magic squares. But Sasha understands that magic squares have already been studied by hundreds of people, so he sees no sense of studying them further. Instead, he invented his own type of square — a prime square.
Sasha has an integer n. He asks you to find any prime square of size n×n. Sasha is absolutely sure such squares exist, so just help him!
*/
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long int ll;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<vi> v(n, vi(n, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                v[i][j] = i == j || i + j == n - 1 ? 1 : 0;
        if (n % 2)
            v[n / 2][n / 2 - 1] = 1, v[n / 2 - 1][n / 2] = 1;
        for (vi x : v)
        {
            for (int i : x)
                cout << i << " ";
            cout << endl;
        }
    }
}
