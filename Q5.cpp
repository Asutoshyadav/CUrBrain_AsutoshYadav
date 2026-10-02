#include <bits/stdc++.h>
using namespace std;

vector<int> even_replace_zero(int a)
{
    vector<int> v;

    while (a != 0)
    {
        if ((a % 10) % 2 == 0)
            v.push_back(0);
        else
            v.push_back(a % 10);

        a /= 10;
    }

    reverse(v.begin(), v.end());

    return v;
}

int main()
{
    vector<int> result = even_replace_zero(13579);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}