#include <iostream>
using namespace std;

int sum_of_two_digits(int first_digit, int second_digit) {
    return first_digit + second_digit;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sum_of_two_digits(a, b);
    return 0;
}