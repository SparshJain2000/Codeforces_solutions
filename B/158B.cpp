/*
Taxi 

After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &itr : arr)
        cin >> itr;

    unordered_map<int, int> m;
    for (int i : arr)
        m[i]++;
    int car = 0;
    int person = 0;

    car += m[4];
    m[4] = 0;
    car += m[2] / 2;
    m[2] = m[2] % 2;
    car += min(m[1], m[3]);
    if (m[1] > m[3])
    {
        m[1] -= m[3];
        m[3] = 0;
    }
    else
    {
        m[3] -= m[1];
        m[1] = 0;
    }
    if (m[1])
    {
        car += m[1] / 4;
        m[1] = m[1] % 4;
        if (m[1] >= 2 && m[2])
        {
            m[1] -= 2;
            m[2]--;
            car++;
        }
        car += m[1];
    }
    if (m[3])
    {
        car += m[2] + m[3];
    }
    cout << car;
    return 0;
}