#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

long long fibonacci_sum_last_digit(long long n) {
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i <= 60; i++){
        f.push_back((f[i-1] + f[i-2]) % 10);
    }
    int rem = n % 60;
    int quotient = (n - rem) / 60;
    return (accumulate(f.begin(), f.end(), 0) * quotient + accumulate(f.begin(), f.begin() + rem + 1, 0)) % 10;
}

int main() {
    int n;
    cin >> n;
    if (n <= 1)
        cout << n;
    else
        cout << fibonacci_sum_last_digit(n) << '\n';
    return 0;
}
