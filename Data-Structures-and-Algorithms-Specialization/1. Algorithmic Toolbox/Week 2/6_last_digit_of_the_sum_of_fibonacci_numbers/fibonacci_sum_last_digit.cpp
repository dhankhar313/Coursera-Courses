#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int fibonacci_fast(int n) {
    vector<int> f(n + 1);
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 60; i++){
        f[i] = (f[i-1] + f[i-2]) % 10;
    }
    int sum = 0;
    return accumulate(f.begin(), f.end(), sum);
}

int main() {
    int n;
    cin >> n;
    if (n <= 1){
        cout << n;
    }
    else
    {
        cout << fibonacci_fast(n) << '\n';
    }
    return 0;
}
