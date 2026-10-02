#include <bits/stdc++.h>
using namespace std;
int sub_product_sum(int a)
{
    int sum = 0, product = 1;
    while (a != 0)
    {
        sum += a % 10;
        product *= a % 10;
        a /= 10;
    }
    return (product - sum);
}
int main()
{
    cout << sub_product_sum(999);
    return 0;
}