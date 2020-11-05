/*
Boring Apartments
There is a building consisting of 10 000 apartments numbered from 1 to 10 000, inclusive.

Call an apartment boring, if its number consists of the same digit. Examples of boring apartments are 11,2,777,9999 and so on.

Our character is a troublemaker, and he calls the intercoms of all boring apartments, till someone answers the call, in the following order:

First he calls all apartments consisting of digit 1, in increasing order (1,11,111,1111).
Next he calls all apartments consisting of digit 2, in increasing order (2,22,222,2222)
And so on.
The resident of the boring apartment x answers the call, and our character stops calling anyone further.

Our character wants to know how many digits he pressed in total and your task is to help him to count the total number of keypresses.

For example, if the resident of boring apartment 22 answered, then our character called apartments with numbers 1,11,111,1111,2,22 and the total number of digits he pressed is 1+2+3+4+1+2=13.

You have to answer t independent test cases.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        int last = x % 10;
        int len = 0;
        int temp = x;
        while (temp)
        {
            len++;
            temp /= 10;
        }
        int ans = 0;
        for (int i = 0; i < last - 1; i++)
            ans += 1 + 2 + 3 + 4;
        if (len == 1)
            ans += 1;
        if (len == 2)
            ans += 1 + 2;
        if (len == 3)
            ans += 1 + 2 + 3;
        if (len == 4)
            ans += 1 + 2 + 3 + 4;
        cout << ans << endl;
    }
}