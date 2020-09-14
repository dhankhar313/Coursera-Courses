#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxPairwiseProduct(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end(), greater<int>());
    return numbers[0]*numbers[1];
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
