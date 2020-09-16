#include <iostream>
using namespace std;

long long EuclidGCD(long long a, long long b){
    if (b == 0){
        return a;
    }
    long long rem = a % b;
    return EuclidGCD(b, rem);
}

long long lcm(long long a, long long b){
    long long gcd = EuclidGCD(a, b);
    long long num = a / gcd;
    return num*b;
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}