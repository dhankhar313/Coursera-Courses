#include <iostream>
using namespace std;

int EuclidGCD(int a, int b){
    if (b == 0){
        return a;
    }
    int rem = a % b;
    return EuclidGCD(b, rem);
}

int lcm(int a, int b){
    int gcd = EuclidGCD(a, b);
    int num = a / gcd;
    return num*b;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}