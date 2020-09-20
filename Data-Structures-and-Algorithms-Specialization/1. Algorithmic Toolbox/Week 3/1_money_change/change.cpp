#include <iostream>
#include <cmath>
using namespace std;

int change(int amount)
{
    int denominations_10 = floor(amount / 10);
    int denominations_5 = floor((amount - denominations_10 * 10) / 5);
    int denominations_1 = amount - (denominations_10 * 10 + denominations_5 * 5);
    return denominations_1 + denominations_5 + denominations_10;
}

int main()
{
    int amount;
    cin >> amount;
    cout << change(amount);
}