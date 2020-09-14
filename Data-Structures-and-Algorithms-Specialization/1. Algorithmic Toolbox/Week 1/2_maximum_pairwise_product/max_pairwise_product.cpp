#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long MaxPairwiseProduct(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end(), greater<int>());
    return (long long)numbers[0] * (long long)numbers[1];
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
