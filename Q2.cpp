#include <bits/stdc++.h>
using namespace std;
int reverse_double(int a)
{
    int rev = 0;
    while (a != 0)
    {
        rev = (rev * 10) + (a % 10);
        a /= 10;
    }
    return 2 * rev;
}
int main()
{
    cout << reverse_double(-45);
    return 0;
}