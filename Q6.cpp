#include <bits/stdc++.h>
using namespace std;
int frequency(int n, int a, int b)
{
    int freq_a = 0, freq_b = 0;
    if (n == 0)
    {
        if (a == 0)
            freq_a++;
        if (b == 0)
            freq_b++;
    }
    else
    {
        while (n != 0)
        {
            if (n % 10 == a)
                freq_a++;
            else if (n % 10 == b)
                freq_b++;

            n /= 10;
        }
        
    }
    return abs(freq_b - freq_a);
}
int main()
{
    cout << frequency(0, 0, 5);
    return 0;
}