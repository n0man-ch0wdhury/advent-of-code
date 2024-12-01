#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    vector<int> a, b;

    int x, y;
    map<int, int> mp;
    while (cin >> x >> y)
    {
        a.push_back(x);
        b.push_back(y);
        mp[y]++;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int sum = 0, sum2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum += abs(a[i] - b[i]);
        sum2 += (mp[a[i]] * a[i]);
    }
    cout << "Part 1: " << sum << endl;
    cout << "Part 2: " << sum2 << endl;

    return 0;
}