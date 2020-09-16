#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long fibonacci_sum_last_digit(long long n) {
    vector<int> f;
    vector<int> j;
    f.push_back(0);
    f.push_back(1);
    j.push_back(0);
    j.push_back(1);
    for (int i = 2; i <= 60; i++){
        int temp = (f[i-1] + f[i-2]) % 10;
        f.push_back(temp);
        j.push_back(temp*temp);
    }    
    long long rem = n % 60;
    long long quotient = (n - rem) / 60;
    return (accumulate(j.begin(), j.end(), 0) * quotient + accumulate(j.begin(), j.begin() + rem + 1, 0)) % 10;
}

int main() {
    long long n;
    cin >> n;
    if (n <= 1)
        cout << n;
    else
        cout << fibonacci_sum_last_digit(n) << '\n';
    return 0;
}
