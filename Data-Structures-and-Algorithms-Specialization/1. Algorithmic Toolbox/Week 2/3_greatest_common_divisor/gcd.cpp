#include <iostream>
using namespace std;

int EuclidGCD(int a, int b){
    if (b == 0){
        return a;
    }
    int rem = a % b;
    return EuclidGCD(b, rem);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << EuclidGCD(a, b);
    return 0;
}