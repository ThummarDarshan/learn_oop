#include <iostream>
using namespace std;


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n,sum=0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i <= n; i++) {
        sum +=fibonacci(i) ;
    }

    cout<<sum;
    cout << endl;

    return 0;
}
