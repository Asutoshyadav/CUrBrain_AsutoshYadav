
#include <bits/stdc++.h>
using namespace std;

int kthFactor(int n, int k) {
    vector<int> factors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);

            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }

    sort(factors.begin(), factors.end());

    if (k > factors.size()) {
        return -1;
    }

    return factors[k - 1];
}

int main() {
    int n, k;
    cout<<"Enter the n:";
    cin >> n;
    cout<<"Enter the k:";
    cin >> k;
    cout<<"output:";
    cout << kthFactor(n, k) << '\n';
    return 0;
}
