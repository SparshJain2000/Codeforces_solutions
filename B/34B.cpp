/*
Sale

Once Bob got to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    int i = 0;
    int ans = 0;
    while (i < m && v[i] < 0)
        ans -= v[i++];
    cout << ans;
}