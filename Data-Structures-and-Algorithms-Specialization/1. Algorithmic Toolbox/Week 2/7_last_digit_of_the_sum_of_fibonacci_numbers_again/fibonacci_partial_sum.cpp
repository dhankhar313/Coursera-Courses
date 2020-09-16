#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int fibonacci_sum_last_digit(int m, int n) {
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i <= 60; i++){
        f.push_back((f[i-1] + f[i-2]) % 10);
    }
    int rem1 = m % 60;
    int quotient1 = (m - rem1) / 60;
    int rem2 = n % 60;
    int quotient2 = (n - rem2) / 60;
    int sum1 = accumulate(f.begin() + rem1, f.end(), 0);
    int sum2 = accumulate(f.begin(), f.begin() + rem2 + 1, 0);
    int sum3 = accumulate(f.begin(), f.end(), 0) *  (quotient2 - (quotient1 + 1));
    return (sum1 + sum2 +sum3) % 10; 
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << fibonacci_sum_last_digit(m, n) << '\n';
    return 0;
}
