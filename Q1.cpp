#include <bits/stdc++.h>
using namespace std;
bool digits_check_even(int a)
{
    int count = 0;
    if (a == 0)
        return 0;

    else
    {
        while (a != 0)
        {
            count++;
            a /= 10;
        }
        return count % 2 == 0;
    }
}
int main()
{
    cout << boolalpha << digits_check_even(0);

    return 0;
}