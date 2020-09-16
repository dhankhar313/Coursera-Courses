#include <iostream>
#include <vector>
using namespace std;

int fibonacci_fast(int n) {
    vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i <= 60; i++){
        f.push_back((f[i-1] + f[i-2]) % 10);
    }
    int temp = n % 60;
    return f[temp];
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
