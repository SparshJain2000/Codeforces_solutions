/*
Kids Seating

Today the kindergarten has a new group of n kids who need to be seated at the dinner table. The chairs at the table are numbered from 1 to 4n. Two kids can't sit on the same chair. It is known that two kids who sit on chairs with numbers a and b (a≠b) will indulge if:
gcd(a,b)=1 or,
a divides b or b divides a.
The teacher really doesn't want the mess at the table, so she wants to seat the kids so there are no 2 of the kid that can indulge. More formally, she wants no pair of chairs a and b that the kids occupy to fulfill the condition above.
*/
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long int ll;
vi seive(ll n)
{
    bitset<10000010> bs;
    vi primes;
    bs.set(); //set all bits to 1;
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= n + 1; i++)
    {
        if (bs[i])
        {
            for (ll j = i * i; j <= n + 1; j += i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
    }
    return primes;
}

int main()
{
    int t;
    cin >> t;
    vi primes = seive(100);
    while (t--)
    {
        int n;
        cin >> n;
        int a = 4 * n;
        printf("%d ", a);
        for (int i = 0; i < n - 1; i++)
            printf("%d ", a -= 2);
        printf("\n");
    }
}