#include <iostream>
using namespace std;

int pisano_period(int m) {
    int previous = 0;
    int current = 1;
    for (int i = 0; i < m * m; i++){
        previous = current;
        current = (previous + current) % m;
        if (previous == 0 && current == 1)
            return  i + 1;
    }
    return 1;
}

int fibonacci_huge(int n, int m) {
    int pp_index = pisano_period(m);
    n = n % pp_index;
    int previous = 0;
    int current = 1;
    for (int i = 0; i < n-1; i++){
        previous = current;
        current = previous + current;
    }
    return current % m;
}
    

int main(){
    int m, n;
    cin >> n, m;
    cout << fibonacci_huge(n, m);
    return 0;
}
