#include <bits/stdc++.h>
using namespace std;
int palindrome(int a)
{
    int temp = a, rev = 0;
    while (temp != 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev == a && a>=0)
        return a;
    else
        return (a + rev);
}
int main()
{
    cout << palindrome(120);
    return 0;
}