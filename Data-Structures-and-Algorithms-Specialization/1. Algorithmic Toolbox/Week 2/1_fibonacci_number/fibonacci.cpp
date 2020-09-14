#include <iostream>
#include <cassert>
#include <vector>
using namespace std;
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;
  return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

long fibonacci_fast(int n) {
    vector<long> f(n + 1);
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n;
    cin >> n;
    // cout << fibonacci_naive(n) << '\n';
    // test_solution();
    if (n <= 1){
        cout << n;
    }
    else
    {
        cout << fibonacci_fast(n) << '\n';
    }
    return 0;
}
